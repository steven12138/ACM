# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\StevenKerman\CLionProjects\TJU_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\StevenKerman\CLionProjects\TJU_1\build

# Include any dependencies generated for this target.
include CMakeFiles/src_CF_CF796div2_B.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/src_CF_CF796div2_B.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/src_CF_CF796div2_B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/src_CF_CF796div2_B.dir/flags.make

CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj: CMakeFiles/src_CF_CF796div2_B.dir/flags.make
CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj: C:/Users/StevenKerman/CLionProjects/TJU_1/src/CF/CF796div2/B.cpp
CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj: CMakeFiles/src_CF_CF796div2_B.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\StevenKerman\CLionProjects\TJU_1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj"
	C:\Users\StevenKerman\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.3345.126\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj -MF CMakeFiles\src_CF_CF796div2_B.dir\src\CF\CF796div2\B.cpp.obj.d -o CMakeFiles\src_CF_CF796div2_B.dir\src\CF\CF796div2\B.cpp.obj -c C:\Users\StevenKerman\CLionProjects\TJU_1\src\CF\CF796div2\B.cpp

CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.i"
	C:\Users\StevenKerman\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.3345.126\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\StevenKerman\CLionProjects\TJU_1\src\CF\CF796div2\B.cpp > CMakeFiles\src_CF_CF796div2_B.dir\src\CF\CF796div2\B.cpp.i

CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.s"
	C:\Users\StevenKerman\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.3345.126\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\StevenKerman\CLionProjects\TJU_1\src\CF\CF796div2\B.cpp -o CMakeFiles\src_CF_CF796div2_B.dir\src\CF\CF796div2\B.cpp.s

# Object files for target src_CF_CF796div2_B
src_CF_CF796div2_B_OBJECTS = \
"CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj"

# External object files for target src_CF_CF796div2_B
src_CF_CF796div2_B_EXTERNAL_OBJECTS =

src_CF_CF796div2_B.exe: CMakeFiles/src_CF_CF796div2_B.dir/src/CF/CF796div2/B.cpp.obj
src_CF_CF796div2_B.exe: CMakeFiles/src_CF_CF796div2_B.dir/build.make
src_CF_CF796div2_B.exe: CMakeFiles/src_CF_CF796div2_B.dir/linklibs.rsp
src_CF_CF796div2_B.exe: CMakeFiles/src_CF_CF796div2_B.dir/objects1.rsp
src_CF_CF796div2_B.exe: CMakeFiles/src_CF_CF796div2_B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\StevenKerman\CLionProjects\TJU_1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable src_CF_CF796div2_B.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\src_CF_CF796div2_B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/src_CF_CF796div2_B.dir/build: src_CF_CF796div2_B.exe
.PHONY : CMakeFiles/src_CF_CF796div2_B.dir/build

CMakeFiles/src_CF_CF796div2_B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\src_CF_CF796div2_B.dir\cmake_clean.cmake
.PHONY : CMakeFiles/src_CF_CF796div2_B.dir/clean

CMakeFiles/src_CF_CF796div2_B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\StevenKerman\CLionProjects\TJU_1 C:\Users\StevenKerman\CLionProjects\TJU_1 C:\Users\StevenKerman\CLionProjects\TJU_1\build C:\Users\StevenKerman\CLionProjects\TJU_1\build C:\Users\StevenKerman\CLionProjects\TJU_1\build\CMakeFiles\src_CF_CF796div2_B.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/src_CF_CF796div2_B.dir/depend

