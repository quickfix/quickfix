set(quickfix_python_VERSION_MAJOR 16)
set(quickfix_python_VERSION_MINOR 0)
set(quickfix_python_VERSION_PATCH 1)
set(quickfix_python_VERSION ${quickfix_python_VERSION_MAJOR}.${quickfix_python_VERSION_MINOR}.${quickfix_python_VERSION_PATCH} )

set(quickfix_python_SOURCES QuickfixPython.cpp)
set(quickfix_python_lib_name _${PROJECT_NAME})

add_library(${quickfix_python_lib_name} SHARED  ${quickfix_python_SOURCES})

target_include_directories(${quickfix_python_lib_name} PRIVATE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/src/C++)

target_link_libraries(${quickfix_python_lib_name} ${PROJECT_NAME})

set_target_properties(${quickfix_python_lib_name} PROPERTIES VERSION ${quickfix_python_VERSION} SOVERSION ${quickfix_python_VERSION_MAJOR} PREFIX "")

install(TARGETS ${quickfix_python_lib_name} DESTINATION lib/python)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/python/ DESTINATION lib/python
        FILES_MATCHING PATTERN "quickfix*.py"
        PATTERN test EXCLUDE)
