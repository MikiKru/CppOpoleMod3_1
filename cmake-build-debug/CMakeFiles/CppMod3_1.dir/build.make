# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
CMAKE_COMMAND = "D:\Programy\CLion\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programy\CLion\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\PROXIMO\CLionProjects\CppMod3_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CppMod3_1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\CppMod3_1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CppMod3_1.dir\flags.make

CMakeFiles\CppMod3_1.dir\main.cpp.obj: CMakeFiles\CppMod3_1.dir\flags.make
CMakeFiles\CppMod3_1.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppMod3_1.dir/main.cpp.obj"
	"D:\Programy\Visual Studio\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CppMod3_1.dir\main.cpp.obj /FdCMakeFiles\CppMod3_1.dir\ /FS -c C:\Users\PROXIMO\CLionProjects\CppMod3_1\main.cpp
<<

CMakeFiles\CppMod3_1.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppMod3_1.dir/main.cpp.i"
	"D:\Programy\Visual Studio\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" > CMakeFiles\CppMod3_1.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\PROXIMO\CLionProjects\CppMod3_1\main.cpp
<<

CMakeFiles\CppMod3_1.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppMod3_1.dir/main.cpp.s"
	"D:\Programy\Visual Studio\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CppMod3_1.dir\main.cpp.s /c C:\Users\PROXIMO\CLionProjects\CppMod3_1\main.cpp
<<

# Object files for target CppMod3_1
CppMod3_1_OBJECTS = \
"CMakeFiles\CppMod3_1.dir\main.cpp.obj"

# External object files for target CppMod3_1
CppMod3_1_EXTERNAL_OBJECTS =

CppMod3_1.exe: CMakeFiles\CppMod3_1.dir\main.cpp.obj
CppMod3_1.exe: CMakeFiles\CppMod3_1.dir\build.make
CppMod3_1.exe: CMakeFiles\CppMod3_1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CppMod3_1.exe"
	"D:\Programy\CLion\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\CppMod3_1.dir --rc="D:\Windows Kits\10\bin\10.0.17763.0\x86\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.17763.0\x86\mt.exe" --manifests  -- "D:\Programy\Visual Studio\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\CppMod3_1.dir\objects1.rsp @<<
 /out:CppMod3_1.exe /implib:CppMod3_1.lib /pdb:C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug\CppMod3_1.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CppMod3_1.dir\build: CppMod3_1.exe

.PHONY : CMakeFiles\CppMod3_1.dir\build

CMakeFiles\CppMod3_1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CppMod3_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CppMod3_1.dir\clean

CMakeFiles\CppMod3_1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\PROXIMO\CLionProjects\CppMod3_1 C:\Users\PROXIMO\CLionProjects\CppMod3_1 C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug C:\Users\PROXIMO\CLionProjects\CppMod3_1\cmake-build-debug\CMakeFiles\CppMod3_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CppMod3_1.dir\depend

