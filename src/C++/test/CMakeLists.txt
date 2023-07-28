add_definitions(-DCATCH_AMALGAMATED_CUSTOM_MAIN)

if (QUICKFIX_TESTS)
  set (ut_SOURCES 
  ${PROJECT_SOURCE_DIR}/src/C++/test/catch_amalgamated.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/DataDictionaryTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/DataDictionaryTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/DictionaryTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/FieldBaseTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/FieldConvertorsTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/FieldMapTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/FieldTypesTestCase.cpp
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
  ${PROJECT_SOURCE_DIR}/src/C++/test/SessionStateTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SessionTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SettingsTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SharedArrayTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SocketAcceptorTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SocketConnectionTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SocketConnectorTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SocketMonitorTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/SocketServerTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/StringUtilitiesTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/TestHelper.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/TimeRangeTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/UtcTimeOnlyTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/UtcTimeStampTestCase.cpp
  ${PROJECT_SOURCE_DIR}/src/C++/test/UtilityTestCase.cpp)
  
  add_executable(ut ut.cpp ${ut_SOURCES})
  
  target_include_directories(ut PRIVATE ${PROJECT_SOURCE_DIR} 
    ${PROJECT_SOURCE_DIR}/src/C++)
    
  target_link_libraries(ut ${PROJECT_NAME})
  
  if (NOT WIN32)
  ADD_CUSTOM_TARGET(ut_target ALL
                    COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ut> ${PROJECT_SOURCE_DIR}/test/ut)
  else()
  set_target_properties(ut PROPERTIES
                        RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/ut/
                        RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/ut/
                        RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/ut/)
  endif()  
endif()  