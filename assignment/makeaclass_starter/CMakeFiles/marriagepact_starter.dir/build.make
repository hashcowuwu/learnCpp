# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tux/cs106l/assignment/makeaclass_starter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tux/cs106l/assignment/makeaclass_starter

# Include any dependencies generated for this target.
include CMakeFiles/marriagepact_starter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/marriagepact_starter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/marriagepact_starter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/marriagepact_starter.dir/flags.make

CMakeFiles/marriagepact_starter.dir/main.cpp.o: CMakeFiles/marriagepact_starter.dir/flags.make
CMakeFiles/marriagepact_starter.dir/main.cpp.o: main.cpp
CMakeFiles/marriagepact_starter.dir/main.cpp.o: CMakeFiles/marriagepact_starter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tux/cs106l/assignment/makeaclass_starter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/marriagepact_starter.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/marriagepact_starter.dir/main.cpp.o -MF CMakeFiles/marriagepact_starter.dir/main.cpp.o.d -o CMakeFiles/marriagepact_starter.dir/main.cpp.o -c /home/tux/cs106l/assignment/makeaclass_starter/main.cpp

CMakeFiles/marriagepact_starter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/marriagepact_starter.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tux/cs106l/assignment/makeaclass_starter/main.cpp > CMakeFiles/marriagepact_starter.dir/main.cpp.i

CMakeFiles/marriagepact_starter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/marriagepact_starter.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tux/cs106l/assignment/makeaclass_starter/main.cpp -o CMakeFiles/marriagepact_starter.dir/main.cpp.s

CMakeFiles/marriagepact_starter.dir/class.cpp.o: CMakeFiles/marriagepact_starter.dir/flags.make
CMakeFiles/marriagepact_starter.dir/class.cpp.o: class.cpp
CMakeFiles/marriagepact_starter.dir/class.cpp.o: CMakeFiles/marriagepact_starter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tux/cs106l/assignment/makeaclass_starter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/marriagepact_starter.dir/class.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/marriagepact_starter.dir/class.cpp.o -MF CMakeFiles/marriagepact_starter.dir/class.cpp.o.d -o CMakeFiles/marriagepact_starter.dir/class.cpp.o -c /home/tux/cs106l/assignment/makeaclass_starter/class.cpp

CMakeFiles/marriagepact_starter.dir/class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/marriagepact_starter.dir/class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tux/cs106l/assignment/makeaclass_starter/class.cpp > CMakeFiles/marriagepact_starter.dir/class.cpp.i

CMakeFiles/marriagepact_starter.dir/class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/marriagepact_starter.dir/class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tux/cs106l/assignment/makeaclass_starter/class.cpp -o CMakeFiles/marriagepact_starter.dir/class.cpp.s

# Object files for target marriagepact_starter
marriagepact_starter_OBJECTS = \
"CMakeFiles/marriagepact_starter.dir/main.cpp.o" \
"CMakeFiles/marriagepact_starter.dir/class.cpp.o"

# External object files for target marriagepact_starter
marriagepact_starter_EXTERNAL_OBJECTS =

marriagepact_starter: CMakeFiles/marriagepact_starter.dir/main.cpp.o
marriagepact_starter: CMakeFiles/marriagepact_starter.dir/class.cpp.o
marriagepact_starter: CMakeFiles/marriagepact_starter.dir/build.make
marriagepact_starter: CMakeFiles/marriagepact_starter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tux/cs106l/assignment/makeaclass_starter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable marriagepact_starter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/marriagepact_starter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/marriagepact_starter.dir/build: marriagepact_starter
.PHONY : CMakeFiles/marriagepact_starter.dir/build

CMakeFiles/marriagepact_starter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/marriagepact_starter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/marriagepact_starter.dir/clean

CMakeFiles/marriagepact_starter.dir/depend:
	cd /home/tux/cs106l/assignment/makeaclass_starter && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tux/cs106l/assignment/makeaclass_starter /home/tux/cs106l/assignment/makeaclass_starter /home/tux/cs106l/assignment/makeaclass_starter /home/tux/cs106l/assignment/makeaclass_starter /home/tux/cs106l/assignment/makeaclass_starter/CMakeFiles/marriagepact_starter.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/marriagepact_starter.dir/depend

