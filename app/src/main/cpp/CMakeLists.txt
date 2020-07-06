cmake_minimum_required(VERSION 3.17.3)
project(nativegl)

add_library(nativegl SHARED API.cpp Renderer.cpp)
target_link_libraries(nativegl PUBLIC GLESv3 EGL log android)

