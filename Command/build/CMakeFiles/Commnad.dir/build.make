# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/geo/work/projects/Design-Pattern/Command

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/geo/work/projects/Design-Pattern/Command/build

# Include any dependencies generated for this target.
include CMakeFiles/Commnad.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Commnad.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Commnad.dir/flags.make

CMakeFiles/Commnad.dir/Invode.cc.o: CMakeFiles/Commnad.dir/flags.make
CMakeFiles/Commnad.dir/Invode.cc.o: ../Invode.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/geo/work/projects/Design-Pattern/Command/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Commnad.dir/Invode.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Commnad.dir/Invode.cc.o -c /home/geo/work/projects/Design-Pattern/Command/Invode.cc

CMakeFiles/Commnad.dir/Invode.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Commnad.dir/Invode.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/geo/work/projects/Design-Pattern/Command/Invode.cc > CMakeFiles/Commnad.dir/Invode.cc.i

CMakeFiles/Commnad.dir/Invode.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Commnad.dir/Invode.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/geo/work/projects/Design-Pattern/Command/Invode.cc -o CMakeFiles/Commnad.dir/Invode.cc.s

CMakeFiles/Commnad.dir/test.cc.o: CMakeFiles/Commnad.dir/flags.make
CMakeFiles/Commnad.dir/test.cc.o: ../test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/geo/work/projects/Design-Pattern/Command/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Commnad.dir/test.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Commnad.dir/test.cc.o -c /home/geo/work/projects/Design-Pattern/Command/test.cc

CMakeFiles/Commnad.dir/test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Commnad.dir/test.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/geo/work/projects/Design-Pattern/Command/test.cc > CMakeFiles/Commnad.dir/test.cc.i

CMakeFiles/Commnad.dir/test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Commnad.dir/test.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/geo/work/projects/Design-Pattern/Command/test.cc -o CMakeFiles/Commnad.dir/test.cc.s

# Object files for target Commnad
Commnad_OBJECTS = \
"CMakeFiles/Commnad.dir/Invode.cc.o" \
"CMakeFiles/Commnad.dir/test.cc.o"

# External object files for target Commnad
Commnad_EXTERNAL_OBJECTS =

Commnad: CMakeFiles/Commnad.dir/Invode.cc.o
Commnad: CMakeFiles/Commnad.dir/test.cc.o
Commnad: CMakeFiles/Commnad.dir/build.make
Commnad: CMakeFiles/Commnad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/geo/work/projects/Design-Pattern/Command/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Commnad"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Commnad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Commnad.dir/build: Commnad

.PHONY : CMakeFiles/Commnad.dir/build

CMakeFiles/Commnad.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Commnad.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Commnad.dir/clean

CMakeFiles/Commnad.dir/depend:
	cd /home/geo/work/projects/Design-Pattern/Command/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/geo/work/projects/Design-Pattern/Command /home/geo/work/projects/Design-Pattern/Command /home/geo/work/projects/Design-Pattern/Command/build /home/geo/work/projects/Design-Pattern/Command/build /home/geo/work/projects/Design-Pattern/Command/build/CMakeFiles/Commnad.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Commnad.dir/depend

