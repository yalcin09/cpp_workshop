# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\Users\alado\OneDrive\Belgeler\cmake-3.19.3-win64-x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\alado\OneDrive\Belgeler\cmake-3.19.3-win64-x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\cpp_workshop\Lesson1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\cpp_workshop\Lesson1\build

# Include any dependencies generated for this target.
include CMakeFiles/Example1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Example1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Example1.dir/flags.make

CMakeFiles/Example1.dir/Example1.cpp.obj: CMakeFiles/Example1.dir/flags.make
CMakeFiles/Example1.dir/Example1.cpp.obj: ../Example1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\cpp_workshop\Lesson1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Example1.dir/Example1.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Example1.dir\Example1.cpp.obj -c E:\cpp_workshop\Lesson1\Example1.cpp

CMakeFiles/Example1.dir/Example1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Example1.dir/Example1.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\cpp_workshop\Lesson1\Example1.cpp > CMakeFiles\Example1.dir\Example1.cpp.i

CMakeFiles/Example1.dir/Example1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Example1.dir/Example1.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\cpp_workshop\Lesson1\Example1.cpp -o CMakeFiles\Example1.dir\Example1.cpp.s

# Object files for target Example1
Example1_OBJECTS = \
"CMakeFiles/Example1.dir/Example1.cpp.obj"

# External object files for target Example1
Example1_EXTERNAL_OBJECTS =

Example1.exe: CMakeFiles/Example1.dir/Example1.cpp.obj
Example1.exe: CMakeFiles/Example1.dir/build.make
Example1.exe: CMakeFiles/Example1.dir/linklibs.rsp
Example1.exe: CMakeFiles/Example1.dir/objects1.rsp
Example1.exe: CMakeFiles/Example1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\cpp_workshop\Lesson1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Example1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Example1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Example1.dir/build: Example1.exe

.PHONY : CMakeFiles/Example1.dir/build

CMakeFiles/Example1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Example1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Example1.dir/clean

CMakeFiles/Example1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\cpp_workshop\Lesson1 E:\cpp_workshop\Lesson1 E:\cpp_workshop\Lesson1\build E:\cpp_workshop\Lesson1\build E:\cpp_workshop\Lesson1\build\CMakeFiles\Example1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Example1.dir/depend

