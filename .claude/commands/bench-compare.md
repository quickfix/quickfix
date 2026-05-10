Compare QuickFIX performance benchmarks between the current branch and another branch or PR.

Usage: /bench-compare <branch-name>
       /bench-compare <PR-number>   (e.g. 712 or #712)

The argument $ARGUMENTS is either a branch name or a PR number to compare against.

## Steps

1. **Validate** that `$ARGUMENTS` is provided. If not, tell the user:
   `Usage: /bench-compare <branch-name|PR-number>`
   and stop.

2. **Resolve the comparison target**. Strip any leading `#` from `$ARGUMENTS`. If the result is a plain integer, treat it as a PR number:
   ```
   gh pr view <number> --json number,title,headRefName,headRepository
   ```
   - If the PR is from a fork (headRepository owner differs from the base repo owner), fetch the fork's branch:
     ```
     git fetch <fork-remote-url> <headRefName>:refs/remotes/pr/<number>
     ```
     Use `refs/remotes/pr/<number>` as the COMPARE_REF.
   - If the PR is from the same repo, use the headRefName as COMPARE_REF.
   - Record a human-readable COMPARE_LABEL like `PR #712: <title> (<headRefName>)`.
   - If `gh pr view` fails, tell the user the PR was not found and stop.

   If `$ARGUMENTS` is not a plain integer, treat it as a branch name:
   ```
   git rev-parse --verify $ARGUMENTS
   ```
   If that fails, tell the user the branch was not found and stop.
   Set COMPARE_REF and COMPARE_LABEL both to `$ARGUMENTS`.

3. **Record the current branch name** for reference:
   ```
   git rev-parse --abbrev-ref HEAD
   ```

4. **Build the `pt` binary on the current branch** (Release mode for reliable numbers). On macOS, pass the SDK's C++ headers explicitly to work around missing headers in the CLT include path:
   ```
   SDK_INCLUDE=$(xcrun --show-sdk-path)/usr/include/c++/v1
   cmake -S . -B build-bench-current -DCMAKE_BUILD_TYPE=Release -DQUICKFIX_EXAMPLES=ON "-DCMAKE_CXX_FLAGS=-I${SDK_INCLUDE}" 2>&1
   cmake --build build-bench-current --target pt 2>&1
   ```
   If the build fails, report the error and stop.

   After building, locate the `pt` binary as an absolute path:
   ```
   CURRENT_PT=$(find $(pwd)/build-bench-current -name "pt" -type f | head -1)
   [ -z "$CURRENT_PT" ] && CURRENT_PT=$(pwd)/lib/pt
   ```

5. **Run benchmarks on the current branch 3 times** from the `test/` directory. Each trial consists of two runs: non-network benchmarks, then network benchmarks (with fewer samples since each involves real socket setup).

   ```
   cd test

   # Trial 1
   ${CURRENT_PT} --quickfix-spec-path ../spec -# "~[network]" 2>&1
   ${CURRENT_PT} --quickfix-spec-path ../spec --port 54322 "[network]" --benchmark-samples 5 2>&1

   # Trial 2
   ${CURRENT_PT} --quickfix-spec-path ../spec -# "~[network]" 2>&1
   ${CURRENT_PT} --quickfix-spec-path ../spec --port 54322 "[network]" --benchmark-samples 5 2>&1

   # Trial 3
   ${CURRENT_PT} --quickfix-spec-path ../spec -# "~[network]" 2>&1
   ${CURRENT_PT} --quickfix-spec-path ../spec --port 54322 "[network]" --benchmark-samples 5 2>&1
   ```

   Capture the combined output of each trial pair as CURRENT_TRIAL_1, CURRENT_TRIAL_2, CURRENT_TRIAL_3.

6. **Create a git worktree** for the comparison target:
   ```
   git worktree add /tmp/quickfix-bench-compare <COMPARE_REF> 2>&1
   ```

7. **Build the `pt` binary in the worktree**:
   ```
   SDK_INCLUDE=$(xcrun --show-sdk-path)/usr/include/c++/v1
   cmake -S /tmp/quickfix-bench-compare -B /tmp/quickfix-bench-build -DCMAKE_BUILD_TYPE=Release -DQUICKFIX_EXAMPLES=ON "-DCMAKE_CXX_FLAGS=-I${SDK_INCLUDE}" 2>&1
   cmake --build /tmp/quickfix-bench-build --target pt 2>&1
   ```
   If the build fails, clean up the worktree (`git worktree remove --force /tmp/quickfix-bench-compare`) and stop.

   Locate the binary as an absolute path:
   ```
   COMPARE_PT=$(find /tmp/quickfix-bench-build -name "pt" -type f | head -1)
   ```

8. **Run benchmarks on the comparison target 3 times** from the worktree's `test/` directory (using a different port for network benchmarks to avoid conflicts if runs overlap):

   ```
   cd /tmp/quickfix-bench-compare/test

   # Trial 1
   ${COMPARE_PT} --quickfix-spec-path ../spec -# "~[network]" 2>&1
   ${COMPARE_PT} --quickfix-spec-path ../spec --port 54332 "[network]" --benchmark-samples 5 2>&1

   # Trial 2
   ${COMPARE_PT} --quickfix-spec-path ../spec -# "~[network]" 2>&1
   ${COMPARE_PT} --quickfix-spec-path ../spec --port 54332 "[network]" --benchmark-samples 5 2>&1

   # Trial 3
   ${COMPARE_PT} --quickfix-spec-path ../spec -# "~[network]" 2>&1
   ${COMPARE_PT} --quickfix-spec-path ../spec --port 54332 "[network]" --benchmark-samples 5 2>&1
   ```

   Capture the combined output of each trial pair as COMPARE_TRIAL_1, COMPARE_TRIAL_2, COMPARE_TRIAL_3.

9. **Clean up** the worktree and build directory:
   ```
   git worktree remove --force /tmp/quickfix-bench-compare
   rm -rf /tmp/quickfix-bench-build
   ```

10. **Parse and display results**. The Catch2 output has this structure for each benchmark:

    ```
    BenchmarkName                      100         12345     2.7474 ms
                                 1.0262 ns    1.02135 ns    1.04603 ns
                               0.043910 ns  0.007503 ns   0.103297 ns
    ```

    - Line 1: benchmark name (left-justified, no leading whitespace), followed by samples, iterations, estimated time
    - Line 2: mean, low mean, high mean — each as `<value> <unit>` (unit is one of `ns`, `µs`, `ms`, `s`)
    - Line 3: std dev stats (ignore for comparison)

    To parse each trial output:
    - Identify benchmark name lines: non-empty lines that don't start with whitespace, aren't all dashes, and aren't the column-header line (`benchmark name ... samples ...`). The benchmark name is all text before the first run of 2+ spaces.
    - The immediately following non-empty line (starts with whitespace) contains the mean as the first `<value> <unit>` pair.
    - Convert mean to ops/sec: divide 1 by the mean expressed in seconds (`ns` → ×10⁻⁹, `µs` → ×10⁻⁶, `ms` → ×10⁻³, `s` → ×1).

    For each benchmark, extract the mean-derived ops/sec from all three trials and compute the **median** as the representative value for each branch.

    Then for each benchmark present in both sets, compute:
    - `Δ%` = `(current_median - compare_median) / compare_median * 100` (positive = current branch is faster)

    Present a Markdown table:

    ```
    ## Benchmark Comparison
    Current branch: <current-branch>  vs  <COMPARE_LABEL>

    | Benchmark                                    | Current median (ops/s) | <COMPARE_LABEL> median (ops/s) | Δ%     |
    |----------------------------------------------|------------------------|--------------------------------|--------|
    | IntegerToString                              |      975,000,000       |          942,000,000           | +3.7%  |
    | Socket/SendMessage                           |          1,250         |              1,180             | +5.9%  |
    | ...                                          |                        |                                |        |

    > 3 trials, median reported | Catch2 statistical benchmarks | Build: Release
    ```

    Highlight any benchmark where `|Δ%| >= 5%` with a note at the end.

    If a benchmark is present in one output but not the other, note it as `N/A`.
