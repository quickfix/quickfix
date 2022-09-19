add_subdirectory(C++)

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin" )

add_executable(at at.cpp getopt.c)

target_include_directories(at PRIVATE ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/src/C++ ${PROJECT_SOURCE_DIR}/UnitTest++/src)
  
target_link_libraries(at ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(at_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:at> ${PROJECT_SOURCE_DIR}/test/at)
else()
set_target_properties(at PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/at/)
endif()  


if (WIN32)
set (ut_SOURCES 
${PROJECT_SOURCE_DIR}/src/C++/test/DataDictionaryTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/DictionaryTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/FieldBaseTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/FieldConvertorsTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/FileLogTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/FileStoreFactoryTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/FileStoreTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/FileUtilitiesTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/GroupTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/HttpMessageTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/HttpParserTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/MemoryStoreTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/MessageSortersTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/MessagesTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/MySQLStoreTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/NullStoreTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/OdbcStoreTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/ParserTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/PostgreSQLStoreTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SessionFactoryTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SessionIDTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SessionSettingsTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SessionTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SettingsTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SocketAcceptorTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SocketConnectorTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/SocketServerTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/StringUtilitiesTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/TestHelper.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/TimeRangeTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/UtcTimeOnlyTestCase.cpp
${PROJECT_SOURCE_DIR}/src/C++/test/UtcTimeStampTestCase.cpp)
endif()

add_executable(ut ut.cpp getopt.c ${ut_SOURCES})

target_include_directories(ut PRIVATE ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/src/C++ ${PROJECT_SOURCE_DIR}/UnitTest++/src ${PROJECT_SOURCE_DIR}/src/C++/test/)
  
target_link_libraries(ut ${PROJECT_NAME} UnitTest++)

if (NOT WIN32)
ADD_CUSTOM_TARGET(ut_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ut> ${PROJECT_SOURCE_DIR}/test/ut)
else()
set_target_properties(ut PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/ut/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/ut/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/ut/)
endif()  

add_executable(pt pt.cpp getopt.c)

target_include_directories(pt PRIVATE ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/src/C++ ${PROJECT_SOURCE_DIR}/UnitTest++/src)
  
target_link_libraries(pt ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(pt_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:pt> ${PROJECT_SOURCE_DIR}/test/pt)
else()
set_target_properties(pt PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/pt/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/pt/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/pt/)
endif()  

endif()

if (HAVE_PYTHON)
add_subdirectory(python)
elseif (HAVE_PYTHON2)
add_subdirectory(python2)
elseif (HAVE_PYTHON3)
add_subdirectory(python3)
endif ()
