# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /root/oschina/Server/study/sharedmemory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/oschina/Server/study/sharedmemory

# Include any dependencies generated for this target.
include CMakeFiles/write.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/write.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/write.dir/flags.make

CMakeFiles/write.dir/share_memory.cpp.o: CMakeFiles/write.dir/flags.make
CMakeFiles/write.dir/share_memory.cpp.o: share_memory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/oschina/Server/study/sharedmemory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/write.dir/share_memory.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/write.dir/share_memory.cpp.o -c /root/oschina/Server/study/sharedmemory/share_memory.cpp

CMakeFiles/write.dir/share_memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/write.dir/share_memory.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/oschina/Server/study/sharedmemory/share_memory.cpp > CMakeFiles/write.dir/share_memory.cpp.i

CMakeFiles/write.dir/share_memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/write.dir/share_memory.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/oschina/Server/study/sharedmemory/share_memory.cpp -o CMakeFiles/write.dir/share_memory.cpp.s

CMakeFiles/write.dir/share_memory.cpp.o.requires:

.PHONY : CMakeFiles/write.dir/share_memory.cpp.o.requires

CMakeFiles/write.dir/share_memory.cpp.o.provides: CMakeFiles/write.dir/share_memory.cpp.o.requires
	$(MAKE) -f CMakeFiles/write.dir/build.make CMakeFiles/write.dir/share_memory.cpp.o.provides.build
.PHONY : CMakeFiles/write.dir/share_memory.cpp.o.provides

CMakeFiles/write.dir/share_memory.cpp.o.provides.build: CMakeFiles/write.dir/share_memory.cpp.o


CMakeFiles/write.dir/write.cpp.o: CMakeFiles/write.dir/flags.make
CMakeFiles/write.dir/write.cpp.o: write.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/oschina/Server/study/sharedmemory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/write.dir/write.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/write.dir/write.cpp.o -c /root/oschina/Server/study/sharedmemory/write.cpp

CMakeFiles/write.dir/write.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/write.dir/write.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/oschina/Server/study/sharedmemory/write.cpp > CMakeFiles/write.dir/write.cpp.i

CMakeFiles/write.dir/write.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/write.dir/write.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/oschina/Server/study/sharedmemory/write.cpp -o CMakeFiles/write.dir/write.cpp.s

CMakeFiles/write.dir/write.cpp.o.requires:

.PHONY : CMakeFiles/write.dir/write.cpp.o.requires

CMakeFiles/write.dir/write.cpp.o.provides: CMakeFiles/write.dir/write.cpp.o.requires
	$(MAKE) -f CMakeFiles/write.dir/build.make CMakeFiles/write.dir/write.cpp.o.provides.build
.PHONY : CMakeFiles/write.dir/write.cpp.o.provides

CMakeFiles/write.dir/write.cpp.o.provides.build: CMakeFiles/write.dir/write.cpp.o


# Object files for target write
write_OBJECTS = \
"CMakeFiles/write.dir/share_memory.cpp.o" \
"CMakeFiles/write.dir/write.cpp.o"

# External object files for target write
write_EXTERNAL_OBJECTS =

write: CMakeFiles/write.dir/share_memory.cpp.o
write: CMakeFiles/write.dir/write.cpp.o
write: CMakeFiles/write.dir/build.make
write: CMakeFiles/write.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/oschina/Server/study/sharedmemory/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable write"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/write.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/write.dir/build: write

.PHONY : CMakeFiles/write.dir/build

CMakeFiles/write.dir/requires: CMakeFiles/write.dir/share_memory.cpp.o.requires
CMakeFiles/write.dir/requires: CMakeFiles/write.dir/write.cpp.o.requires

.PHONY : CMakeFiles/write.dir/requires

CMakeFiles/write.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/write.dir/cmake_clean.cmake
.PHONY : CMakeFiles/write.dir/clean

CMakeFiles/write.dir/depend:
	cd /root/oschina/Server/study/sharedmemory && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/oschina/Server/study/sharedmemory /root/oschina/Server/study/sharedmemory /root/oschina/Server/study/sharedmemory /root/oschina/Server/study/sharedmemory /root/oschina/Server/study/sharedmemory/CMakeFiles/write.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/write.dir/depend
