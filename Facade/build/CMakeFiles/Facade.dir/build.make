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
CMAKE_SOURCE_DIR = /home/geo/work/1690work/projects/Design-Pattern/Facade

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/geo/work/1690work/projects/Design-Pattern/Facade/build

# Include any dependencies generated for this target.
include CMakeFiles/Facade.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Facade.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Facade.dir/flags.make

CMakeFiles/Facade.dir/test.cc.o: CMakeFiles/Facade.dir/flags.make
CMakeFiles/Facade.dir/test.cc.o: ../test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/geo/work/1690work/projects/Design-Pattern/Facade/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Facade.dir/test.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Facade.dir/test.cc.o -c /home/geo/work/1690work/projects/Design-Pattern/Facade/test.cc

CMakeFiles/Facade.dir/test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Facade.dir/test.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/geo/work/1690work/projects/Design-Pattern/Facade/test.cc > CMakeFiles/Facade.dir/test.cc.i

CMakeFiles/Facade.dir/test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Facade.dir/test.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/geo/work/1690work/projects/Design-Pattern/Facade/test.cc -o CMakeFiles/Facade.dir/test.cc.s

CMakeFiles/Facade.dir/test.cc.o.requires:

.PHONY : CMakeFiles/Facade.dir/test.cc.o.requires

CMakeFiles/Facade.dir/test.cc.o.provides: CMakeFiles/Facade.dir/test.cc.o.requires
	$(MAKE) -f CMakeFiles/Facade.dir/build.make CMakeFiles/Facade.dir/test.cc.o.provides.build
.PHONY : CMakeFiles/Facade.dir/test.cc.o.provides

CMakeFiles/Facade.dir/test.cc.o.provides.build: CMakeFiles/Facade.dir/test.cc.o


# Object files for target Facade
Facade_OBJECTS = \
"CMakeFiles/Facade.dir/test.cc.o"

# External object files for target Facade
Facade_EXTERNAL_OBJECTS =

Facade: CMakeFiles/Facade.dir/test.cc.o
Facade: CMakeFiles/Facade.dir/build.make
Facade: CMakeFiles/Facade.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/geo/work/1690work/projects/Design-Pattern/Facade/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Facade"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Facade.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Facade.dir/build: Facade

.PHONY : CMakeFiles/Facade.dir/build

CMakeFiles/Facade.dir/requires: CMakeFiles/Facade.dir/test.cc.o.requires

.PHONY : CMakeFiles/Facade.dir/requires

CMakeFiles/Facade.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Facade.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Facade.dir/clean

CMakeFiles/Facade.dir/depend:
	cd /home/geo/work/1690work/projects/Design-Pattern/Facade/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/geo/work/1690work/projects/Design-Pattern/Facade /home/geo/work/1690work/projects/Design-Pattern/Facade /home/geo/work/1690work/projects/Design-Pattern/Facade/build /home/geo/work/1690work/projects/Design-Pattern/Facade/build /home/geo/work/1690work/projects/Design-Pattern/Facade/build/CMakeFiles/Facade.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Facade.dir/depend

