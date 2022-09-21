cmake_minimum_required(VERSION 3.0)

project(BasicOpenGL)

# Pangolin
find_package(Pangolin REQUIRED)
include_directories(${Pangolin_INCLUDE_DIRS})

set(sample_srcs
    1_gl_intro_classic_triangle.cpp
)

foreach(sample_src ${sample_srcs})
    get_filename_component(sample_name ${sample_src} NAME_WE)
    set(target_name "tutorial_${sample_name}")
    add_executable(${target_name} ${sample_src})
    target_link_libraries(${target_name} ${Pangolin_LIBRARIES})
endforeach()
