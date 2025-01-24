cmake_minimum_required(VERSION 3.31)

project(z_engine)
find_package(SDL3 REQUIRED COMPONENTS SDL3)


add_executable(z_engine src/main.c)
target_link_libraries(z_engine PRIVATE SDL3::SDL3)
