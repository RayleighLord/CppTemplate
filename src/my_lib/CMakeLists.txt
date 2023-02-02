set(LIBRARY_SOURCES
    "my_lib.cpp")
set(LIBRARY_HEADERS
    "my_lib.h")

set(LIBRARY_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR})

add_library(${LIBRARY_NAME} STATIC 
    ${LIBRARY_SOURCES} 
    ${LIBRARY_HEADERS})
target_include_directories(${LIBRARY_NAME} PUBLIC 
    ${LIBRARY_INCLUDES})