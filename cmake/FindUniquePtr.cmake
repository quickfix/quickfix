# A trimmed down version of FindSharedPtr. Modifed for std unique_ptr to check only in standard namespace.


# Ceres Solver - A fast non-linear least squares minimizer
# Copyright 2015 Google Inc. All rights reserved.
# http://ceres-solver.org/
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# * Redistributions of source code must retain the above copyright notice,
#   this list of conditions and the following disclaimer.
# * Redistributions in binary form must reproduce the above copyright notice,
#   this list of conditions and the following disclaimer in the documentation
#   and/or other materials provided with the distribution.
# * Neither the name of Google Inc. nor the names of its contributors may be
#   used to endorse or promote products derived from this software without
#   specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# Author: sergey.vfx@gmail.com (Sergey Sharybin)
#
# FindSharedPtr.cmake - Find shared pointer header and namespace.


#
# This module defines the following variables:
#
# UNIQUE_PTR_FOUND: TRUE if unique_ptr found.
# Use <memory>.
macro(FIND_UNIQUE_PTR)
  message("-- Checking for unique ptr.")
  # To support CXX11 option, clear the results of all check_xxx() functions
  # s/t we always perform the checks each time, otherwise CMake fails to
  # detect that the tests should be performed again after CXX11 is toggled.
  unset(HAVE_STD_MEMORY_HEADER CACHE)
  unset(HAVE_UNIQUE_PTR_IN_STD_NAMESPACE CACHE)
  set(FIND_UNIQUE_PTR FALSE)
  check_include_file_cxx(memory HAVE_STD_MEMORY_HEADER)
  if (HAVE_STD_MEMORY_HEADER)
    # Finding the memory header doesn't mean that shared_ptr is in std
    # namespace.
    #
    # In particular, MSVC 2008 has shared_ptr declared in std::tr1.  In
    # order to support this, we do an extra check to see which namespace
    # should be used.
    include(CheckCXXSourceCompiles)
    check_cxx_source_compiles("#include <memory>
                               int main() {
                                 std::unique_ptr<int> int_ptr;
                                 return 0;
                               }"
                              HAVE_UNIQUE_PTR_IN_STD_NAMESPACE)
    if (HAVE_UNIQUE_PTR_IN_STD_NAMESPACE)
      message("-- Found unique in std namespace using <memory> header.")
      set(UNIQUE_PTR_FOUND TRUE)
    endif (HAVE_UNIQUE_PTR_IN_STD_NAMESPACE)
  endif (HAVE_STD_MEMORY_HEADER)
endmacro(FIND_UNIQUE_PTR)
