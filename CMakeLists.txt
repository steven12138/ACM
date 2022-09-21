cmake_minimum_required(VERSION 3.22)
project(TJU_1)


if (${IS_TJU})
    message(TJU_BUILD)
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_FLAGS_DEBUG "-fno-asm -Wall -lm --static")
else ()
    set(CMAKE_CXX_STANDARD 20)
#    set(CMAKE_CXX_FLAGS_DEBUG "-fno-asm -O2 -Wall -lm --static")
endif ()

file(GLOB_RECURSE EXE_SOURCES src/*.cpp)

foreach (FILE ${EXE_SOURCES})
    get_filename_component(NAME ${FILE} NAME_WE)
    add_executable(${NAME} ${FILE})
endforeach ()
