cmake_minimum_required(VERSION 3.10)

project(SearchVector VERSION 1.0)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(SearchVectorConfig.h.in SearchVectorConfig.h)

add_executable(SearchVector SearchVector.cpp)

target_include_directories(SearchVector PUBLIC "${PROJECT_BINARY_DIR}")