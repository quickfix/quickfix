if (WIN32)

add_executable(atrun
  main.cpp Process.cpp ./test/ProcessTestCase.cpp ${CMAKE_CURRENT_SOURCE_DIR}/../../src/getopt.c)
 
target_include_directories(atrun PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../src)

target_link_libraries(atrun PRIVATE UnitTest++)

set_target_properties(atrun PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../debug/at/
  RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../release/at/
  RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_SOURCE_DIR}/../release/at/)

endif()
