cmake_minimum_required(VERSION 2.8)
project(terminal_test)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include(ragel)

ragel_gen(vt100)

set(SOURCES
    main.cpp
    fontclass.cpp
    glyphclass.cpp
    ${CMAKE_BINARY_DIR}/vt100.cc
    gohufont.c
)

set(HEADERS
    config.h
    font.h
    fontclass.hpp
    glyphclass.hpp
)

set(LIBRARIES
    -lvncserver
)

add_executable("vt340" ${SOURCES} ${HEADERS})
target_link_libraries("vt340" ${LIBRARIES})
target_include_directories("vt340" PRIVATE ${CMAKE_SOURCE_DIR})

add_custom_target(docs doxygen Doxyfile WORKING_DIRECTORY ${CMAKE_SOURCE_DIR} )
