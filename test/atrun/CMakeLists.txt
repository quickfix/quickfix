if (WIN32)

add_executable(atrun
 main.cpp Process.cpp ${PROJECT_SOURCE_DIR}/src/getopt.c)
 
target_include_directories(atrun PRIVATE ${PROJECT_SOURCE_DIR}/src)

target_link_libraries(atrun)

set_target_properties(atrun PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/at/)

endif()
