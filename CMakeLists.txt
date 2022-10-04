cmake_minimum_required(VERSION 3.10)
project(ME_491_PE)

set(CMAKE_CXX_STANDARD 20)
include(helper/helper.cmake)
create_executable(ME_491_PI src/policy_iteration_runner.cpp)
