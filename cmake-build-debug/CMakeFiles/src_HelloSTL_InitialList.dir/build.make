# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\m1861\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\m1861\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\m1861\UserData\dev\ACM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\m1861\UserData\dev\ACM\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/src_HelloSTL_InitialList.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/src_HelloSTL_InitialList.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/src_HelloSTL_InitialList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/src_HelloSTL_InitialList.dir/flags.make

CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj: CMakeFiles/src_HelloSTL_InitialList.dir/flags.make
CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj: ../src/HelloSTL/InitialList.cpp
CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj: CMakeFiles/src_HelloSTL_InitialList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\m1861\UserData\dev\ACM\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj"
	C:\Users\m1861\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj -MF CMakeFiles\src_HelloSTL_InitialList.dir\src\HelloSTL\InitialList.cpp.obj.d -o CMakeFiles\src_HelloSTL_InitialList.dir\src\HelloSTL\InitialList.cpp.obj -c C:\Users\m1861\UserData\dev\ACM\src\HelloSTL\InitialList.cpp

CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.i"
	C:\Users\m1861\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\m1861\UserData\dev\ACM\src\HelloSTL\InitialList.cpp > CMakeFiles\src_HelloSTL_InitialList.dir\src\HelloSTL\InitialList.cpp.i

CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.s"
	C:\Users\m1861\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\m1861\UserData\dev\ACM\src\HelloSTL\InitialList.cpp -o CMakeFiles\src_HelloSTL_InitialList.dir\src\HelloSTL\InitialList.cpp.s

# Object files for target src_HelloSTL_InitialList
src_HelloSTL_InitialList_OBJECTS = \
"CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj"

# External object files for target src_HelloSTL_InitialList
src_HelloSTL_InitialList_EXTERNAL_OBJECTS =

src_HelloSTL_InitialList.exe: CMakeFiles/src_HelloSTL_InitialList.dir/src/HelloSTL/InitialList.cpp.obj
src_HelloSTL_InitialList.exe: CMakeFiles/src_HelloSTL_InitialList.dir/build.make
src_HelloSTL_InitialList.exe: CMakeFiles/src_HelloSTL_InitialList.dir/linklibs.rsp
src_HelloSTL_InitialList.exe: CMakeFiles/src_HelloSTL_InitialList.dir/objects1.rsp
src_HelloSTL_InitialList.exe: CMakeFiles/src_HelloSTL_InitialList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\m1861\UserData\dev\ACM\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable src_HelloSTL_InitialList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\src_HelloSTL_InitialList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/src_HelloSTL_InitialList.dir/build: src_HelloSTL_InitialList.exe
.PHONY : CMakeFiles/src_HelloSTL_InitialList.dir/build

CMakeFiles/src_HelloSTL_InitialList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\src_HelloSTL_InitialList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/src_HelloSTL_InitialList.dir/clean

CMakeFiles/src_HelloSTL_InitialList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\m1861\UserData\dev\ACM C:\Users\m1861\UserData\dev\ACM C:\Users\m1861\UserData\dev\ACM\cmake-build-debug C:\Users\m1861\UserData\dev\ACM\cmake-build-debug C:\Users\m1861\UserData\dev\ACM\cmake-build-debug\CMakeFiles\src_HelloSTL_InitialList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/src_HelloSTL_InitialList.dir/depend

