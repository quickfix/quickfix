if (WIN32)

add_executable(atrun
 main.cpp Process.cpp ./test/ProcessTestCase.cpp ${CMAKE_SOURCE_DIR}/src/getopt.c)
 
target_include_directories(atrun PRIVATE ${CMAKE_SOURCE_DIR}/UnitTest++/src ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(atrun UnitTest++)

endif()
