add_subdirectory(C++)

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )

add_executable(at at.cpp getopt.c)

target_include_directories(at PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} 
  ${CMAKE_CURRENT_SOURCE_DIR}/../
  ${CMAKE_CURRENT_SOURCE_DIR}/C++)
  
target_link_libraries(at PRIVATE ${PROJECT_NAME} PRIVATE UnitTest++)

if (NOT WIN32)
ADD_CUSTOM_TARGET(at_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:at> ${CMAKE_CURRENT_SOURCE_DIR}/../test/at)
else()
set_target_properties(at PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../test/debug/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../test/release/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_SOURCE_DIR}/../test/release/at/)
endif()  

if (WIN32)
set (ut_SOURCES 
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/DataDictionaryTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/DictionaryTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/FieldBaseTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/FieldConvertorsTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/FileLogTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/FileStoreFactoryTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/FileStoreTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/FileUtilitiesTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/GroupTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/HttpMessageTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/HttpParserTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/MemoryStoreTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/MessageSortersTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/MessagesTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/MySQLStoreTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/NullStoreTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/OdbcStoreTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/ParserTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/PostgreSQLStoreTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SessionFactoryTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SessionIDTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SessionSettingsTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SessionTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SettingsTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SocketAcceptorTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SocketConnectorTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/SocketServerTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/StringUtilitiesTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/TestHelper.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/TimeRangeTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/UtcTimeOnlyTestCase.cpp
${CMAKE_CURRENT_SOURCE_DIR}/C++/test/UtcTimeStampTestCase.cpp)
endif()

add_executable(ut ut.cpp getopt.c ${ut_SOURCES})

target_include_directories(ut PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../
  ${CMAKE_CURRENT_SOURCE_DIR}/C++
  ${CMAKE_CURRENT_SOURCE_DIR}/C++/test)
  
target_link_libraries(ut PRIVATE ${PROJECT_NAME} PRIVATE UnitTest++)

if (NOT WIN32)
ADD_CUSTOM_TARGET(ut_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ut> ${CMAKE_CURRENT_SOURCE_DIR}/../test/ut)
else()
set_target_properties(ut PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../test/debug/ut/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../test/release/ut/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_SOURCE_DIR}/../test/release/ut/)
endif()  

add_executable(pt pt.cpp getopt.c)

target_include_directories(pt PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../
  ${CMAKE_CURRENT_SOURCE_DIR}/C++)
  
target_link_libraries(pt PRIVATE ${PROJECT_NAME} PRIVATE UnitTest++)

if (NOT WIN32)
ADD_CUSTOM_TARGET(pt_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:pt> ${CMAKE_CURRENT_SOURCE_DIR}/../test/pt)
else()
set_target_properties(pt PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../test/debug/pt/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../test/release/pt/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_SOURCE_DIR}/../test/release/pt/)
endif()  

endif()

if (HAVE_PYTHON)
add_subdirectory(python)
elseif (HAVE_PYTHON2)
add_subdirectory(python2)
elseif (HAVE_PYTHON3)
add_subdirectory(python3)
endif ()
