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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Addison\Desktop\My-Portfolio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\My_Portfolio.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\My_Portfolio.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\My_Portfolio.dir\flags.make

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.obj: "..\CS236 PROJECT\ColonAutomaton.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/ColonAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\ColonAutomaton.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/ColonAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\ColonAutomaton.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/ColonAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\ColonAutomaton.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.obj: "..\CS236 PROJECT\ColonDashAutomaton.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/ColonDashAutomaton.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\ColonDashAutomaton.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/ColonDashAutomaton.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\ColonDashAutomaton.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/ColonDashAutomaton.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\ColonDashAutomaton.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.obj: "..\CS236 PROJECT\Expression.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Expression.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Expression.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Expression.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Expression.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Expression.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Expression.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.obj: "..\CS236 PROJECT\Lexer.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Lexer.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Lexer.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Lexer.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Lexer.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Lexer.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Lexer.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.obj: "..\CS236 PROJECT\main.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\main.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\main.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\main.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.obj: "..\CS236 PROJECT\Parameter.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Parameter.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Parameter.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Parameter.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Parameter.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Parameter.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Parameter.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.obj: "..\CS236 PROJECT\Parser.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Parser.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Parser.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Parser.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Parser.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Parser.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Parser.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.obj: "..\CS236 PROJECT\PlainParameter.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/PlainParameter.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\PlainParameter.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/PlainParameter.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\PlainParameter.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/PlainParameter.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\PlainParameter.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.obj: "..\CS236 PROJECT\Predicate.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Predicate.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Predicate.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Predicate.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Predicate.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Predicate.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Predicate.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.obj: "..\CS236 PROJECT\Rule.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Rule.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Rule.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Rule.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Rule.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Rule.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Rule.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.obj: CMakeFiles\My_Portfolio.dir\flags.make
CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.obj: "..\CS236 PROJECT\Token.cpp"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Token.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.obj /FdCMakeFiles\My_Portfolio.dir\ /FS -c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Token.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Token.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Token.cpp"
<<

CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/My_Portfolio.dir/CS236_PROJECT/Token.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.s /c "C:\Users\Addison\Desktop\My-Portfolio\CS236 PROJECT\Token.cpp"
<<

# Object files for target My_Portfolio
My_Portfolio_OBJECTS = \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.obj" \
"CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.obj"

# External object files for target My_Portfolio
My_Portfolio_EXTERNAL_OBJECTS =

My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonAutomaton.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\ColonDashAutomaton.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Expression.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Lexer.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\main.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parameter.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Parser.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\PlainParameter.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Predicate.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Rule.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\CS236_PROJECT\Token.cpp.obj
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\build.make
My_Portfolio.exe: CMakeFiles\My_Portfolio.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable My_Portfolio.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\My_Portfolio.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\My_Portfolio.dir\objects1.rsp @<<
 /out:My_Portfolio.exe /implib:My_Portfolio.lib /pdb:C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\My_Portfolio.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\My_Portfolio.dir\build: My_Portfolio.exe
.PHONY : CMakeFiles\My_Portfolio.dir\build

CMakeFiles\My_Portfolio.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\My_Portfolio.dir\cmake_clean.cmake
.PHONY : CMakeFiles\My_Portfolio.dir\clean

CMakeFiles\My_Portfolio.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Addison\Desktop\My-Portfolio C:\Users\Addison\Desktop\My-Portfolio C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug C:\Users\Addison\Desktop\My-Portfolio\cmake-build-debug\CMakeFiles\My_Portfolio.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\My_Portfolio.dir\depend

