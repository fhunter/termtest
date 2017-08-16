cmake_minimum_required(VERSION 2.8)
project(terminal_test)

set(SOURCES
    main.cpp
)

set(HEADERS
)

set(LIBRARIES
    -lvncserver
)

add_executable("vt340" ${SOURCES} ${HEADERS})
target_link_libraries("vt340" ${LIBRARIES})

add_custom_target(docs doxygen Doxyfile WORKING_DIRECTORY ${CMAKE_SOURCE_DIR} )
