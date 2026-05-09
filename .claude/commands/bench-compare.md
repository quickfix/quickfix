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

   After building, locate the `pt` binary (its output location varies depending on whether the build dir is inside or outside the source tree):
   ```
   CURRENT_PT=$(find build-bench-current -name "pt" -type f | head -1)
   # fallback: check lib/pt at project root (happens when build dir is inside source tree)
   [ -z "$CURRENT_PT" ] && CURRENT_PT=lib/pt
   ```

5. **Run benchmarks on the current branch 3 times** from the `test/` directory, using a different port offset for each trial to avoid conflicts:
   ```
   cd test
   ../${CURRENT_PT} -p 6671 -c 200000 2>&1   # trial 1
   ../${CURRENT_PT} -p 6671 -c 200000 2>&1   # trial 2
   ../${CURRENT_PT} -p 6671 -c 200000 2>&1   # trial 3
   ```
   Capture all three outputs as CURRENT_TRIAL_1, CURRENT_TRIAL_2, CURRENT_TRIAL_3.

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

   Locate the binary:
   ```
   COMPARE_PT=$(find /tmp/quickfix-bench-build -name "pt" -type f | head -1)
   ```

8. **Run benchmarks on the comparison target 3 times** from the worktree's `test/` directory:
   ```
   cd /tmp/quickfix-bench-compare/test
   ${COMPARE_PT} -p 6672 -c 200000 2>&1   # trial 1
   ${COMPARE_PT} -p 6672 -c 200000 2>&1   # trial 2
   ${COMPARE_PT} -p 6672 -c 200000 2>&1   # trial 3
   ```
   Capture all three outputs as COMPARE_TRIAL_1, COMPARE_TRIAL_2, COMPARE_TRIAL_3.

9. **Clean up** the worktree and build directory:
   ```
   git worktree remove --force /tmp/quickfix-bench-compare
   rm -rf /tmp/quickfix-bench-build
   ```

10. **Parse and display results**. For each benchmark in each set of three trials, extract the `num_per_second` values and compute the **median** across the three trials. Use the median as the representative value for each branch.

    Then for each benchmark present in both sets, compute:
    - `Δ%` = `(current_median - compare_median) / compare_median * 100` (positive = current branch is faster)

    Present a Markdown table:

    ```
    ## Benchmark Comparison
    Current branch: <current-branch>  vs  <COMPARE_LABEL>

    | Benchmark                                    | Current median (ops/s) | <COMPARE_LABEL> median (ops/s) | Δ%     |
    |----------------------------------------------|------------------------|--------------------------------|--------|
    | Converting integers to strings               |          4,250,000     |              4,100,000         | +3.7%  |
    | ...                                          |                        |                                |        |

    > Count: 200,000 iterations per benchmark × 3 trials, median reported | Build: Release
    ```

    Highlight any benchmark where `|Δ%| >= 5%` with a note at the end.

    If a benchmark is present in one output but not the other, note it as `N/A`.
