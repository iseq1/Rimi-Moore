# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\project under development\C++ proj\free coding\work9"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\project under development\C++ proj\free coding\work9\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\work9.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\work9.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\work9.dir\flags.make

CMakeFiles\work9.dir\main.cpp.obj: CMakeFiles\work9.dir\flags.make
CMakeFiles\work9.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\project under development\C++ proj\free coding\work9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/work9.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\work9.dir\main.cpp.obj /FdCMakeFiles\work9.dir\ /FS -c "D:\project under development\C++ proj\free coding\work9\main.cpp"
<<

CMakeFiles\work9.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work9.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\work9.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\project under development\C++ proj\free coding\work9\main.cpp"
<<

CMakeFiles\work9.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work9.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\work9.dir\main.cpp.s /c "D:\project under development\C++ proj\free coding\work9\main.cpp"
<<

# Object files for target work9
work9_OBJECTS = \
"CMakeFiles\work9.dir\main.cpp.obj"

# External object files for target work9
work9_EXTERNAL_OBJECTS =

work9.exe: CMakeFiles\work9.dir\main.cpp.obj
work9.exe: CMakeFiles\work9.dir\build.make
work9.exe: CMakeFiles\work9.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\project under development\C++ proj\free coding\work9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable work9.exe"
	"D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\work9.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\work9.dir\objects1.rsp @<<
 /out:work9.exe /implib:work9.lib /pdb:"D:\project under development\C++ proj\free coding\work9\cmake-build-debug\work9.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\work9.dir\build: work9.exe
.PHONY : CMakeFiles\work9.dir\build

CMakeFiles\work9.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\work9.dir\cmake_clean.cmake
.PHONY : CMakeFiles\work9.dir\clean

CMakeFiles\work9.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\project under development\C++ proj\free coding\work9" "D:\project under development\C++ proj\free coding\work9" "D:\project under development\C++ proj\free coding\work9\cmake-build-debug" "D:\project under development\C++ proj\free coding\work9\cmake-build-debug" "D:\project under development\C++ proj\free coding\work9\cmake-build-debug\CMakeFiles\work9.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\work9.dir\depend

