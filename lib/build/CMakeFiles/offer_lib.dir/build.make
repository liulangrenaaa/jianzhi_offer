# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/ubuntu/workspace/leetcode/jianzhi_offer/lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build

# Include any dependencies generated for this target.
include CMakeFiles/offer_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/offer_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer_lib.dir/flags.make

CMakeFiles/offer_lib.dir/src/offer_common.c.o: CMakeFiles/offer_lib.dir/flags.make
CMakeFiles/offer_lib.dir/src/offer_common.c.o: ../src/offer_common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/offer_lib.dir/src/offer_common.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/offer_lib.dir/src/offer_common.c.o   -c /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/src/offer_common.c

CMakeFiles/offer_lib.dir/src/offer_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/offer_lib.dir/src/offer_common.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/src/offer_common.c > CMakeFiles/offer_lib.dir/src/offer_common.c.i

CMakeFiles/offer_lib.dir/src/offer_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/offer_lib.dir/src/offer_common.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/src/offer_common.c -o CMakeFiles/offer_lib.dir/src/offer_common.c.s

CMakeFiles/offer_lib.dir/src/offer_common.c.o.requires:

.PHONY : CMakeFiles/offer_lib.dir/src/offer_common.c.o.requires

CMakeFiles/offer_lib.dir/src/offer_common.c.o.provides: CMakeFiles/offer_lib.dir/src/offer_common.c.o.requires
	$(MAKE) -f CMakeFiles/offer_lib.dir/build.make CMakeFiles/offer_lib.dir/src/offer_common.c.o.provides.build
.PHONY : CMakeFiles/offer_lib.dir/src/offer_common.c.o.provides

CMakeFiles/offer_lib.dir/src/offer_common.c.o.provides.build: CMakeFiles/offer_lib.dir/src/offer_common.c.o


# Object files for target offer_lib
offer_lib_OBJECTS = \
"CMakeFiles/offer_lib.dir/src/offer_common.c.o"

# External object files for target offer_lib
offer_lib_EXTERNAL_OBJECTS =

liboffer_lib.so: CMakeFiles/offer_lib.dir/src/offer_common.c.o
liboffer_lib.so: CMakeFiles/offer_lib.dir/build.make
liboffer_lib.so: CMakeFiles/offer_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library liboffer_lib.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/offer_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer_lib.dir/build: liboffer_lib.so

.PHONY : CMakeFiles/offer_lib.dir/build

CMakeFiles/offer_lib.dir/requires: CMakeFiles/offer_lib.dir/src/offer_common.c.o.requires

.PHONY : CMakeFiles/offer_lib.dir/requires

CMakeFiles/offer_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/offer_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/offer_lib.dir/clean

CMakeFiles/offer_lib.dir/depend:
	cd /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/workspace/leetcode/jianzhi_offer/lib /home/ubuntu/workspace/leetcode/jianzhi_offer/lib /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build /home/ubuntu/workspace/leetcode/jianzhi_offer/lib/build/CMakeFiles/offer_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer_lib.dir/depend
