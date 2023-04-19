cmake_minimum_required(VERSION 3.25)
project(constructors)

set(CMAKE_CXX_STANDARD 17)

add_executable(constructors main/main.cpp util/Util.cpp util/Util.h Objects/User.cpp Objects/User.h Objects/Admin.cpp Objects/Admin.h)
