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
CMAKE_SOURCE_DIR = "D:\project under development\C++ proj\free coding\work6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\project under development\C++ proj\free coding\work6\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\work6.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\work6.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\work6.dir\flags.make

CMakeFiles\work6.dir\main.cpp.obj: CMakeFiles\work6.dir\flags.make
CMakeFiles\work6.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\project under development\C++ proj\free coding\work6\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/work6.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\work6.dir\main.cpp.obj /FdCMakeFiles\work6.dir\ /FS -c "D:\project under development\C++ proj\free coding\work6\main.cpp"
<<

CMakeFiles\work6.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/work6.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\work6.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\project under development\C++ proj\free coding\work6\main.cpp"
<<

CMakeFiles\work6.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/work6.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\work6.dir\main.cpp.s /c "D:\project under development\C++ proj\free coding\work6\main.cpp"
<<

# Object files for target work6
work6_OBJECTS = \
"CMakeFiles\work6.dir\main.cpp.obj"

# External object files for target work6
work6_EXTERNAL_OBJECTS =

work6.exe: CMakeFiles\work6.dir\main.cpp.obj
work6.exe: CMakeFiles\work6.dir\build.make
work6.exe: CMakeFiles\work6.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\project under development\C++ proj\free coding\work6\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable work6.exe"
	"D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\work6.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\work6.dir\objects1.rsp @<<
 /out:work6.exe /implib:work6.lib /pdb:"D:\project under development\C++ proj\free coding\work6\cmake-build-debug\work6.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\work6.dir\build: work6.exe
.PHONY : CMakeFiles\work6.dir\build

CMakeFiles\work6.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\work6.dir\cmake_clean.cmake
.PHONY : CMakeFiles\work6.dir\clean

CMakeFiles\work6.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\project under development\C++ proj\free coding\work6" "D:\project under development\C++ proj\free coding\work6" "D:\project under development\C++ proj\free coding\work6\cmake-build-debug" "D:\project under development\C++ proj\free coding\work6\cmake-build-debug" "D:\project under development\C++ proj\free coding\work6\cmake-build-debug\CMakeFiles\work6.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\work6.dir\depend

