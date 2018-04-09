add_subdirectory(C++)

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )

add_executable(at at.cpp getopt.c)

target_include_directories(at PRIVATE ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR}/UnitTest++/src)
  
target_link_libraries(at ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(at_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:at> ${CMAKE_SOURCE_DIR}/test/at)
else()
set_target_properties(at PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/test/debug/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/test/release/at/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_SOURCE_DIR}/test/release/at/)
endif()  


if (WIN32)
set (ut_SOURCES 
${CMAKE_SOURCE_DIR}/src/C++/test/DataDictionaryTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/DictionaryTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/FieldBaseTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/FieldConvertorsTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/FileLogTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/FileStoreFactoryTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/FileStoreTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/FileUtilitiesTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/GroupTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/HttpMessageTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/HttpParserTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/MemoryStoreTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/MessageSortersTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/MessagesTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/MySQLStoreTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/NullStoreTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/OdbcStoreTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/ParserTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/PostgreSQLStoreTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SessionFactoryTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SessionIDTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SessionSettingsTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SessionTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SettingsTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SocketAcceptorTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SocketConnectorTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/SocketServerTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/StringUtilitiesTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/TestHelper.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/TimeRangeTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/UtcTimeOnlyTestCase.cpp
${CMAKE_SOURCE_DIR}/src/C++/test/UtcTimeStampTestCase.cpp)
endif()

add_executable(ut ut.cpp getopt.c ${ut_SOURCES})

target_include_directories(ut PRIVATE ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR}/UnitTest++/src ${CMAKE_SOURCE_DIR}/src/C++/test/)
  
target_link_libraries(ut ${PROJECT_NAME} UnitTest++)

if (NOT WIN32)
ADD_CUSTOM_TARGET(ut_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ut> ${CMAKE_SOURCE_DIR}/test/ut)
else()
set_target_properties(ut PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/test/debug/ut/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/test/release/ut/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_SOURCE_DIR}/test/release/ut/)
endif()  

add_executable(pt pt.cpp getopt.c)

target_include_directories(pt PRIVATE ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR}/UnitTest++/src)
  
target_link_libraries(pt ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(pt_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:pt> ${CMAKE_SOURCE_DIR}/test/pt)
else()
set_target_properties(pt PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/test/debug/pt/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/test/release/pt/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_SOURCE_DIR}/test/release/pt/)
endif()  

endif()

if (HAVE_PYTHON)
add_subdirectory(python)
elseif (HAVE_PYTHON2)
add_subdirectory(python2)
elseif (HAVE_PYTHON3)
add_subdirectory(python3)
endif ()
