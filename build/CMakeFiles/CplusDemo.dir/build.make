# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_SOURCE_DIR = /home/wanghongfu/code/CplusDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wanghongfu/code/CplusDemo/build

# Include any dependencies generated for this target.
include CMakeFiles/CplusDemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CplusDemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CplusDemo.dir/flags.make

CMakeFiles/CplusDemo.dir/main.cpp.o: CMakeFiles/CplusDemo.dir/flags.make
CMakeFiles/CplusDemo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wanghongfu/code/CplusDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CplusDemo.dir/main.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CplusDemo.dir/main.cpp.o -c /home/wanghongfu/code/CplusDemo/main.cpp

CMakeFiles/CplusDemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CplusDemo.dir/main.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wanghongfu/code/CplusDemo/main.cpp > CMakeFiles/CplusDemo.dir/main.cpp.i

CMakeFiles/CplusDemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CplusDemo.dir/main.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wanghongfu/code/CplusDemo/main.cpp -o CMakeFiles/CplusDemo.dir/main.cpp.s

# Object files for target CplusDemo
CplusDemo_OBJECTS = \
"CMakeFiles/CplusDemo.dir/main.cpp.o"

# External object files for target CplusDemo
CplusDemo_EXTERNAL_OBJECTS =

CplusDemo: CMakeFiles/CplusDemo.dir/main.cpp.o
CplusDemo: CMakeFiles/CplusDemo.dir/build.make
CplusDemo: CMakeFiles/CplusDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wanghongfu/code/CplusDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CplusDemo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CplusDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CplusDemo.dir/build: CplusDemo

.PHONY : CMakeFiles/CplusDemo.dir/build

CMakeFiles/CplusDemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CplusDemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CplusDemo.dir/clean

CMakeFiles/CplusDemo.dir/depend:
	cd /home/wanghongfu/code/CplusDemo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wanghongfu/code/CplusDemo /home/wanghongfu/code/CplusDemo /home/wanghongfu/code/CplusDemo/build /home/wanghongfu/code/CplusDemo/build /home/wanghongfu/code/CplusDemo/build/CMakeFiles/CplusDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CplusDemo.dir/depend

