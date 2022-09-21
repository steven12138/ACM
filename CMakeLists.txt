cmake_minimum_required(VERSION 3.22)
project(TJU_1)


if (${IS_TJU})
    # TJU_ACM_OJ
    message(TJU_BUILD)
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_FLAGS_DEBUG "-Wall -lm --static")
else ()
    set(CMAKE_CXX_STANDARD 20)
endif ()

file(GLOB_RECURSE EXE_SOURCES src/*.cpp)

foreach (FILE ${EXE_SOURCES})

    # Get File Name
    get_filename_component(NAME ${FILE} NAME_WE)

    # Get File Path
    get_filename_component(PATH ${FILE} DIRECTORY)

    # Gen EXE Name
    set(EXE_NAME ${PATH}/${NAME})
    string(REPLACE "C:/Users/StevenKerman/CLionProjects/TJU_1/" "" EXE_NAME "${EXE_NAME}")          #MSVC
    string(REPLACE "/mnt/c/Users/StevenKerman/CLionProjects/TJU_1/" "" EXE_NAME "${EXE_NAME}")      #WSL
    string(REPLACE "/" "_" EXE_NAME "${EXE_NAME}")

    add_executable(${EXE_NAME} ${FILE})
endforeach ()
