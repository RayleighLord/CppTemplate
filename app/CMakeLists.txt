set(EXE_SOURCES 
    "main.cpp")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})

target_link_libraries(${EXECUTABLE_NAME} PUBLIC 
    ${LIBRARY_NAME})

target_set_warnings(
    TARGET
    ${EXECUTABLE_NAME}
    ENABLE
    ${ENABLE_WARNINGS}
    AS_ERRORS
    ${ENABLE_WARNINGS_AS_ERRORS})