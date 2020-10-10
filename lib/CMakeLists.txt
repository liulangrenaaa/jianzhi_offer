# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (offer_comm)

# 指定头文件
include_directories(inc/)

ADD_LIBRARY(offer_comm SHARED src/offer_common.c)

