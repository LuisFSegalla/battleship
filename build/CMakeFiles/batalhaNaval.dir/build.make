# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luis/batalhaNaval/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luis/batalhaNaval/build

# Include any dependencies generated for this target.
include CMakeFiles/batalhaNaval.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/batalhaNaval.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/batalhaNaval.dir/flags.make

CMakeFiles/batalhaNaval.dir/main.cpp.o: CMakeFiles/batalhaNaval.dir/flags.make
CMakeFiles/batalhaNaval.dir/main.cpp.o: /home/luis/batalhaNaval/cpp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/batalhaNaval/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/batalhaNaval.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/batalhaNaval.dir/main.cpp.o -c /home/luis/batalhaNaval/cpp/main.cpp

CMakeFiles/batalhaNaval.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/batalhaNaval.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/batalhaNaval/cpp/main.cpp > CMakeFiles/batalhaNaval.dir/main.cpp.i

CMakeFiles/batalhaNaval.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/batalhaNaval.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/batalhaNaval/cpp/main.cpp -o CMakeFiles/batalhaNaval.dir/main.cpp.s

CMakeFiles/batalhaNaval.dir/barco.cpp.o: CMakeFiles/batalhaNaval.dir/flags.make
CMakeFiles/batalhaNaval.dir/barco.cpp.o: /home/luis/batalhaNaval/cpp/barco.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/batalhaNaval/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/batalhaNaval.dir/barco.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/batalhaNaval.dir/barco.cpp.o -c /home/luis/batalhaNaval/cpp/barco.cpp

CMakeFiles/batalhaNaval.dir/barco.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/batalhaNaval.dir/barco.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/batalhaNaval/cpp/barco.cpp > CMakeFiles/batalhaNaval.dir/barco.cpp.i

CMakeFiles/batalhaNaval.dir/barco.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/batalhaNaval.dir/barco.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/batalhaNaval/cpp/barco.cpp -o CMakeFiles/batalhaNaval.dir/barco.cpp.s

CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.o: CMakeFiles/batalhaNaval.dir/flags.make
CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.o: /home/luis/batalhaNaval/cpp/tabuleiro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/batalhaNaval/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.o -c /home/luis/batalhaNaval/cpp/tabuleiro.cpp

CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/batalhaNaval/cpp/tabuleiro.cpp > CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.i

CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/batalhaNaval/cpp/tabuleiro.cpp -o CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.s

CMakeFiles/batalhaNaval.dir/jogo.cpp.o: CMakeFiles/batalhaNaval.dir/flags.make
CMakeFiles/batalhaNaval.dir/jogo.cpp.o: /home/luis/batalhaNaval/cpp/jogo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/batalhaNaval/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/batalhaNaval.dir/jogo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/batalhaNaval.dir/jogo.cpp.o -c /home/luis/batalhaNaval/cpp/jogo.cpp

CMakeFiles/batalhaNaval.dir/jogo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/batalhaNaval.dir/jogo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/batalhaNaval/cpp/jogo.cpp > CMakeFiles/batalhaNaval.dir/jogo.cpp.i

CMakeFiles/batalhaNaval.dir/jogo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/batalhaNaval.dir/jogo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/batalhaNaval/cpp/jogo.cpp -o CMakeFiles/batalhaNaval.dir/jogo.cpp.s

# Object files for target batalhaNaval
batalhaNaval_OBJECTS = \
"CMakeFiles/batalhaNaval.dir/main.cpp.o" \
"CMakeFiles/batalhaNaval.dir/barco.cpp.o" \
"CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.o" \
"CMakeFiles/batalhaNaval.dir/jogo.cpp.o"

# External object files for target batalhaNaval
batalhaNaval_EXTERNAL_OBJECTS =

batalhaNaval: CMakeFiles/batalhaNaval.dir/main.cpp.o
batalhaNaval: CMakeFiles/batalhaNaval.dir/barco.cpp.o
batalhaNaval: CMakeFiles/batalhaNaval.dir/tabuleiro.cpp.o
batalhaNaval: CMakeFiles/batalhaNaval.dir/jogo.cpp.o
batalhaNaval: CMakeFiles/batalhaNaval.dir/build.make
batalhaNaval: CMakeFiles/batalhaNaval.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luis/batalhaNaval/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable batalhaNaval"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/batalhaNaval.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/batalhaNaval.dir/build: batalhaNaval

.PHONY : CMakeFiles/batalhaNaval.dir/build

CMakeFiles/batalhaNaval.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/batalhaNaval.dir/cmake_clean.cmake
.PHONY : CMakeFiles/batalhaNaval.dir/clean

CMakeFiles/batalhaNaval.dir/depend:
	cd /home/luis/batalhaNaval/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luis/batalhaNaval/cpp /home/luis/batalhaNaval/cpp /home/luis/batalhaNaval/build /home/luis/batalhaNaval/build /home/luis/batalhaNaval/build/CMakeFiles/batalhaNaval.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/batalhaNaval.dir/depend

