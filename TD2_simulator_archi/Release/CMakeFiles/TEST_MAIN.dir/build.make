# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elhadji/Bureau/chps2021/TD2_simulator_archi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release

# Include any dependencies generated for this target.
include CMakeFiles/TEST_MAIN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TEST_MAIN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEST_MAIN.dir/flags.make

CMakeFiles/TEST_MAIN.dir/Test.cpp.o: CMakeFiles/TEST_MAIN.dir/flags.make
CMakeFiles/TEST_MAIN.dir/Test.cpp.o: ../Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TEST_MAIN.dir/Test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TEST_MAIN.dir/Test.cpp.o -c /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Test.cpp

CMakeFiles/TEST_MAIN.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST_MAIN.dir/Test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Test.cpp > CMakeFiles/TEST_MAIN.dir/Test.cpp.i

CMakeFiles/TEST_MAIN.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST_MAIN.dir/Test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Test.cpp -o CMakeFiles/TEST_MAIN.dir/Test.cpp.s

# Object files for target TEST_MAIN
TEST_MAIN_OBJECTS = \
"CMakeFiles/TEST_MAIN.dir/Test.cpp.o"

# External object files for target TEST_MAIN
TEST_MAIN_EXTERNAL_OBJECTS =

TEST_MAIN: CMakeFiles/TEST_MAIN.dir/Test.cpp.o
TEST_MAIN: CMakeFiles/TEST_MAIN.dir/build.make
TEST_MAIN: /usr/lib/x86_64-linux-gnu/libgtest.a
TEST_MAIN: /usr/lib/x86_64-linux-gnu/libgtest_main.a
TEST_MAIN: src/libProb.a
TEST_MAIN: /usr/lib/x86_64-linux-gnu/libgtest.a
TEST_MAIN: CMakeFiles/TEST_MAIN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TEST_MAIN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TEST_MAIN.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=TEST_MAIN -D TEST_EXECUTABLE=/home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release/TEST_MAIN -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=TEST_MAIN_TESTS -D CTEST_FILE=/home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release/TEST_MAIN[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -P /usr/share/cmake-3.16/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/TEST_MAIN.dir/build: TEST_MAIN

.PHONY : CMakeFiles/TEST_MAIN.dir/build

CMakeFiles/TEST_MAIN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TEST_MAIN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TEST_MAIN.dir/clean

CMakeFiles/TEST_MAIN.dir/depend:
	cd /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elhadji/Bureau/chps2021/TD2_simulator_archi /home/elhadji/Bureau/chps2021/TD2_simulator_archi /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release /home/elhadji/Bureau/chps2021/TD2_simulator_archi/Release/CMakeFiles/TEST_MAIN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEST_MAIN.dir/depend

