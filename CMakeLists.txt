cmake_minimum_required(VERSION 3.22)
project(TJU_1)


if (${IS_TJU})
    # TJU_ACM_OJ
    message(TJU_BUILD)
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_FLAGS "-Wall -lm --static -O0")
elseif (${MinGW})
    message(MinGW_BUILD)
    set(CMAKE_CXX_STANDARD 20)
else ()
    set(CMAKE_CXX_STANDARD 20)
endif ()

set(CMAKE_CXX_FLAGS "-fno-elide-constructors")

file(GLOB_RECURSE EXE_SOURCES src/*.cpp)

foreach (FILE ${EXE_SOURCES})

    # Get File Name
    get_filename_component(NAME ${FILE} NAME_WE)

    # Get File Path
    get_filename_component(PATH ${FILE} DIRECTORY)

    # Gen EXE Name
    set(EXE_NAME ${PATH}/${NAME})
    #Remove Path
    string(REPLACE ${PROJECT_SOURCE_DIR}/ "" EXE_NAME "${EXE_NAME}")
    string(REPLACE "/" "_" EXE_NAME "${EXE_NAME}")

    add_executable(${EXE_NAME} ${FILE})
endforeach ()
