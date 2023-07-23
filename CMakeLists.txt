cmake_minimum_required(VERSION 3.0.0)
project(gb VERSION 0.1.0)

add_executable(gb gb.h gb_sdl_renderer.h gb.cpp gb_sdl_renderer.cpp main.cpp)

set_property(TARGET gb PROPERTY CXX_STANDARD 17)

get_filename_component(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)

set(SDL_STATIC ON)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/submodules/sdl ${CMAKE_CURRENT_BINARY_DIR}/sdl)

target_include_directories(gb PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/submodules/sdl/include)

target_link_libraries(gb SDL3-static)