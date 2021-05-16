# CMakeList.txt : CMake project for MinecraftServerTools, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Emerald_Hammer "Emerald_Hammer.cpp" "src/Emerald_Hammer.h" "src/Commands.cpp" "config/Server_Properties.cpp" "config/Config.cpp" "src/winx/pipes/pipe.h" "src/linux/pipes/pipe.h" "src/linux/pipes/pipe.cpp" "src/winx/pipes/pipe.cpp")

# TODO: Add tests and install targets if needed.
