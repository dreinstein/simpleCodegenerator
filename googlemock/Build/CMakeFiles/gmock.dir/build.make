# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\codegenerator\Codegenerator-Cplusplus\googlemock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\codegenerator\Codegenerator-Cplusplus\googlemock\Build

# Include any dependencies generated for this target.
include CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gmock.dir/flags.make

CMakeFiles/gmock.dir/src/gmock-all.cc.obj: CMakeFiles/gmock.dir/flags.make
CMakeFiles/gmock.dir/src/gmock-all.cc.obj: CMakeFiles/gmock.dir/includes_CXX.rsp
CMakeFiles/gmock.dir/src/gmock-all.cc.obj: ../src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\codegenerator\Codegenerator-Cplusplus\googlemock\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gmock.dir/src/gmock-all.cc.obj"
	C:\Qt\Qt5.6.3\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gmock.dir\src\gmock-all.cc.obj -c C:\codegenerator\Codegenerator-Cplusplus\googlemock\src\gmock-all.cc

CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	C:\Qt\Qt5.6.3\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\codegenerator\Codegenerator-Cplusplus\googlemock\src\gmock-all.cc > CMakeFiles\gmock.dir\src\gmock-all.cc.i

CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	C:\Qt\Qt5.6.3\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\codegenerator\Codegenerator-Cplusplus\googlemock\src\gmock-all.cc -o CMakeFiles\gmock.dir\src\gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.obj"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/libgmock.a: CMakeFiles/gmock.dir/src/gmock-all.cc.obj
lib/libgmock.a: CMakeFiles/gmock.dir/build.make
lib/libgmock.a: CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\codegenerator\Codegenerator-Cplusplus\googlemock\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library lib\libgmock.a"
	$(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gmock.dir/build: lib/libgmock.a

.PHONY : CMakeFiles/gmock.dir/build

CMakeFiles/gmock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gmock.dir/clean

CMakeFiles/gmock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\codegenerator\Codegenerator-Cplusplus\googlemock C:\codegenerator\Codegenerator-Cplusplus\googlemock C:\codegenerator\Codegenerator-Cplusplus\googlemock\Build C:\codegenerator\Codegenerator-Cplusplus\googlemock\Build C:\codegenerator\Codegenerator-Cplusplus\googlemock\Build\CMakeFiles\gmock.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gmock.dir/depend
