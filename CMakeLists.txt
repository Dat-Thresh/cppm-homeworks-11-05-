cmake_minimum_required(VERSION 3.22.0)
project(homeworks_11_05)

include_directories(resources)
set(MAIN_CPP cppm-homeworks-11-05.cpp)

add_executable(homework_11_05 ${MAIN_CPP})
add_subdirectory(resources)
target_link_libraries(homework_11_05 figure_lib)