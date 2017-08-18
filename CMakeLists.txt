cmake_minimum_required(VERSION 2.8)
project(terminal_test)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include(ragel)

ragel_gen(vt100)

set(SOURCES
    main.cpp
    ${CMAKE_BINARY_DIR}/vt100.cc
)

set(HEADERS
    config.h
)

set(LIBRARIES
    -lvncserver
)

add_executable("vt340" ${SOURCES} ${HEADERS})
target_link_libraries("vt340" ${LIBRARIES})

add_custom_target(docs doxygen Doxyfile WORKING_DIRECTORY ${CMAKE_SOURCE_DIR} )
