# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /home/user/Documents/cmake-gtest-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Documents/Day7

# Include any dependencies generated for this target.
include CMakeFiles/cmake-gtest-master.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake-gtest-master.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake-gtest-master.dir/flags.make

CMakeFiles/cmake-gtest-master.dir/main.cpp.o: CMakeFiles/cmake-gtest-master.dir/flags.make
CMakeFiles/cmake-gtest-master.dir/main.cpp.o: /home/user/Documents/cmake-gtest-master/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Day7/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmake-gtest-master.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmake-gtest-master.dir/main.cpp.o -c /home/user/Documents/cmake-gtest-master/main.cpp

CMakeFiles/cmake-gtest-master.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake-gtest-master.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Documents/cmake-gtest-master/main.cpp > CMakeFiles/cmake-gtest-master.dir/main.cpp.i

CMakeFiles/cmake-gtest-master.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake-gtest-master.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Documents/cmake-gtest-master/main.cpp -o CMakeFiles/cmake-gtest-master.dir/main.cpp.s

CMakeFiles/cmake-gtest-master.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cmake-gtest-master.dir/main.cpp.o.requires

CMakeFiles/cmake-gtest-master.dir/main.cpp.o.provides: CMakeFiles/cmake-gtest-master.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cmake-gtest-master.dir/build.make CMakeFiles/cmake-gtest-master.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cmake-gtest-master.dir/main.cpp.o.provides

CMakeFiles/cmake-gtest-master.dir/main.cpp.o.provides.build: CMakeFiles/cmake-gtest-master.dir/main.cpp.o


# Object files for target cmake-gtest-master
cmake__gtest__master_OBJECTS = \
"CMakeFiles/cmake-gtest-master.dir/main.cpp.o"

# External object files for target cmake-gtest-master
cmake__gtest__master_EXTERNAL_OBJECTS =

cmake-gtest-master: CMakeFiles/cmake-gtest-master.dir/main.cpp.o
cmake-gtest-master: CMakeFiles/cmake-gtest-master.dir/build.make
cmake-gtest-master: CMakeFiles/cmake-gtest-master.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Day7/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmake-gtest-master"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake-gtest-master.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake-gtest-master.dir/build: cmake-gtest-master

.PHONY : CMakeFiles/cmake-gtest-master.dir/build

CMakeFiles/cmake-gtest-master.dir/requires: CMakeFiles/cmake-gtest-master.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cmake-gtest-master.dir/requires

CMakeFiles/cmake-gtest-master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmake-gtest-master.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmake-gtest-master.dir/clean

CMakeFiles/cmake-gtest-master.dir/depend:
	cd /home/user/Documents/Day7 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/cmake-gtest-master /home/user/Documents/cmake-gtest-master /home/user/Documents/Day7 /home/user/Documents/Day7 /home/user/Documents/Day7/CMakeFiles/cmake-gtest-master.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake-gtest-master.dir/depend

