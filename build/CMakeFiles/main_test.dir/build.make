# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vlzqz/school/AVelazquez-project8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vlzqz/school/AVelazquez-project8/build

# Include any dependencies generated for this target.
include CMakeFiles/main_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main_test.dir/flags.make

CMakeFiles/main_test.dir/tests/MainTest.cpp.o: CMakeFiles/main_test.dir/flags.make
CMakeFiles/main_test.dir/tests/MainTest.cpp.o: /Users/vlzqz/school/AVelazquez-project8/tests/MainTest.cpp
CMakeFiles/main_test.dir/tests/MainTest.cpp.o: CMakeFiles/main_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vlzqz/school/AVelazquez-project8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main_test.dir/tests/MainTest.cpp.o"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main_test.dir/tests/MainTest.cpp.o -MF CMakeFiles/main_test.dir/tests/MainTest.cpp.o.d -o CMakeFiles/main_test.dir/tests/MainTest.cpp.o -c /Users/vlzqz/school/AVelazquez-project8/tests/MainTest.cpp

CMakeFiles/main_test.dir/tests/MainTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_test.dir/tests/MainTest.cpp.i"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vlzqz/school/AVelazquez-project8/tests/MainTest.cpp > CMakeFiles/main_test.dir/tests/MainTest.cpp.i

CMakeFiles/main_test.dir/tests/MainTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_test.dir/tests/MainTest.cpp.s"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vlzqz/school/AVelazquez-project8/tests/MainTest.cpp -o CMakeFiles/main_test.dir/tests/MainTest.cpp.s

# Object files for target main_test
main_test_OBJECTS = \
"CMakeFiles/main_test.dir/tests/MainTest.cpp.o"

# External object files for target main_test
main_test_EXTERNAL_OBJECTS =

main_test: CMakeFiles/main_test.dir/tests/MainTest.cpp.o
main_test: CMakeFiles/main_test.dir/build.make
main_test: /usr/local/lib/libgtest_main.a
main_test: /usr/local/lib/libgtest.a
main_test: CMakeFiles/main_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vlzqz/school/AVelazquez-project8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_test.dir/link.txt --verbose=$(VERBOSE)
	/opt/homebrew/Cellar/cmake/3.26.3/bin/cmake -D TEST_TARGET=main_test -D TEST_EXECUTABLE=/Users/vlzqz/school/AVelazquez-project8/build/main_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/vlzqz/school/AVelazquez-project8/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=main_test_TESTS -D CTEST_FILE=/Users/vlzqz/school/AVelazquez-project8/build/main_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /opt/homebrew/Cellar/cmake/3.26.3/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/main_test.dir/build: main_test
.PHONY : CMakeFiles/main_test.dir/build

CMakeFiles/main_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main_test.dir/clean

CMakeFiles/main_test.dir/depend:
	cd /Users/vlzqz/school/AVelazquez-project8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vlzqz/school/AVelazquez-project8 /Users/vlzqz/school/AVelazquez-project8 /Users/vlzqz/school/AVelazquez-project8/build /Users/vlzqz/school/AVelazquez-project8/build /Users/vlzqz/school/AVelazquez-project8/build/CMakeFiles/main_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main_test.dir/depend

