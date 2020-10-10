# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
SET(CMAKE_C_COMPILER “/usr/bin/gcc-5”)

# 项目信息
project (two_wei_array)                         # ??

# 指定头文件
include_directories(../lib/inc/)

# 指定生成目标
add_executable(a.out main.c)                    # ??

TARGET_LINK_LIBRARIES(a.out liboffer_comm.so)
