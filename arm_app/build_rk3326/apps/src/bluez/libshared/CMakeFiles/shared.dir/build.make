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
CMAKE_SOURCE_DIR = /home/grt/ls/reality/depends/xdsrc/tuya/arm_app

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326

# Include any dependencies generated for this target.
include apps/src/bluez/libshared/CMakeFiles/shared.dir/depend.make

# Include the progress variables for this target.
include apps/src/bluez/libshared/CMakeFiles/shared.dir/progress.make

# Include the compile flags for this target's objects.
include apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make

apps/src/bluez/libshared/CMakeFiles/shared.dir/att.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/att.c.o: ../apps/src/bluez/libshared/att.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/att.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/att.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/att.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/att.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/att.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/att.c > CMakeFiles/shared.dir/att.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/att.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/att.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/att.c -o CMakeFiles/shared.dir/att.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/crypto.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/crypto.c.o: ../apps/src/bluez/libshared/crypto.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/crypto.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/crypto.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/crypto.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/crypto.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/crypto.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/crypto.c > CMakeFiles/shared.dir/crypto.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/crypto.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/crypto.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/crypto.c -o CMakeFiles/shared.dir/crypto.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-client.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-client.c.o: ../apps/src/bluez/libshared/gatt-client.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-client.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/gatt-client.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-client.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-client.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/gatt-client.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-client.c > CMakeFiles/shared.dir/gatt-client.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-client.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/gatt-client.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-client.c -o CMakeFiles/shared.dir/gatt-client.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-db.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-db.c.o: ../apps/src/bluez/libshared/gatt-db.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-db.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/gatt-db.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-db.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-db.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/gatt-db.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-db.c > CMakeFiles/shared.dir/gatt-db.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-db.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/gatt-db.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-db.c -o CMakeFiles/shared.dir/gatt-db.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-helpers.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-helpers.c.o: ../apps/src/bluez/libshared/gatt-helpers.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-helpers.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/gatt-helpers.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-helpers.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-helpers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/gatt-helpers.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-helpers.c > CMakeFiles/shared.dir/gatt-helpers.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-helpers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/gatt-helpers.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-helpers.c -o CMakeFiles/shared.dir/gatt-helpers.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-server.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-server.c.o: ../apps/src/bluez/libshared/gatt-server.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-server.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/gatt-server.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-server.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-server.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/gatt-server.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-server.c > CMakeFiles/shared.dir/gatt-server.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-server.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/gatt-server.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/gatt-server.c -o CMakeFiles/shared.dir/gatt-server.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/io-mainloop.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/io-mainloop.c.o: ../apps/src/bluez/libshared/io-mainloop.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/io-mainloop.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/io-mainloop.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/io-mainloop.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/io-mainloop.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/io-mainloop.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/io-mainloop.c > CMakeFiles/shared.dir/io-mainloop.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/io-mainloop.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/io-mainloop.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/io-mainloop.c -o CMakeFiles/shared.dir/io-mainloop.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/mainloop.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/mainloop.c.o: ../apps/src/bluez/libshared/mainloop.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/mainloop.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/mainloop.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/mainloop.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/mainloop.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/mainloop.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/mainloop.c > CMakeFiles/shared.dir/mainloop.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/mainloop.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/mainloop.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/mainloop.c -o CMakeFiles/shared.dir/mainloop.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/queue.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/queue.c.o: ../apps/src/bluez/libshared/queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/queue.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/queue.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/queue.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/queue.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/queue.c > CMakeFiles/shared.dir/queue.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/queue.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/queue.c -o CMakeFiles/shared.dir/queue.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/timeout-mainloop.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/timeout-mainloop.c.o: ../apps/src/bluez/libshared/timeout-mainloop.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/timeout-mainloop.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/timeout-mainloop.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/timeout-mainloop.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/timeout-mainloop.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/timeout-mainloop.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/timeout-mainloop.c > CMakeFiles/shared.dir/timeout-mainloop.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/timeout-mainloop.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/timeout-mainloop.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/timeout-mainloop.c -o CMakeFiles/shared.dir/timeout-mainloop.c.s

apps/src/bluez/libshared/CMakeFiles/shared.dir/util.c.o: apps/src/bluez/libshared/CMakeFiles/shared.dir/flags.make
apps/src/bluez/libshared/CMakeFiles/shared.dir/util.c.o: ../apps/src/bluez/libshared/util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object apps/src/bluez/libshared/CMakeFiles/shared.dir/util.c.o"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shared.dir/util.c.o   -c /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/util.c

apps/src/bluez/libshared/CMakeFiles/shared.dir/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shared.dir/util.c.i"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/util.c > CMakeFiles/shared.dir/util.c.i

apps/src/bluez/libshared/CMakeFiles/shared.dir/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shared.dir/util.c.s"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && /home/grt/ls/reality/depends/rk3266/host/bin/aarch64-linux-gcc --sysroot=/home/grt/ls/reality/depends/rk3266/common/../host/aarch64-rk3326-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared/util.c -o CMakeFiles/shared.dir/util.c.s

# Object files for target shared
shared_OBJECTS = \
"CMakeFiles/shared.dir/att.c.o" \
"CMakeFiles/shared.dir/crypto.c.o" \
"CMakeFiles/shared.dir/gatt-client.c.o" \
"CMakeFiles/shared.dir/gatt-db.c.o" \
"CMakeFiles/shared.dir/gatt-helpers.c.o" \
"CMakeFiles/shared.dir/gatt-server.c.o" \
"CMakeFiles/shared.dir/io-mainloop.c.o" \
"CMakeFiles/shared.dir/mainloop.c.o" \
"CMakeFiles/shared.dir/queue.c.o" \
"CMakeFiles/shared.dir/timeout-mainloop.c.o" \
"CMakeFiles/shared.dir/util.c.o"

# External object files for target shared
shared_EXTERNAL_OBJECTS =

apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/att.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/crypto.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-client.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-db.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-helpers.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/gatt-server.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/io-mainloop.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/mainloop.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/queue.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/timeout-mainloop.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/util.c.o
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/build.make
apps/src/bluez/libshared/libshared.a: apps/src/bluez/libshared/CMakeFiles/shared.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C static library libshared.a"
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && $(CMAKE_COMMAND) -P CMakeFiles/shared.dir/cmake_clean_target.cmake
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shared.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/src/bluez/libshared/CMakeFiles/shared.dir/build: apps/src/bluez/libshared/libshared.a

.PHONY : apps/src/bluez/libshared/CMakeFiles/shared.dir/build

apps/src/bluez/libshared/CMakeFiles/shared.dir/clean:
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared && $(CMAKE_COMMAND) -P CMakeFiles/shared.dir/cmake_clean.cmake
.PHONY : apps/src/bluez/libshared/CMakeFiles/shared.dir/clean

apps/src/bluez/libshared/CMakeFiles/shared.dir/depend:
	cd /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/grt/ls/reality/depends/xdsrc/tuya/arm_app /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/apps/src/bluez/libshared /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326 /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared /home/grt/ls/reality/depends/xdsrc/tuya/arm_app/build_rk3326/apps/src/bluez/libshared/CMakeFiles/shared.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/src/bluez/libshared/CMakeFiles/shared.dir/depend

