set(quickfix_VERSION_MAJOR 16)
set(quickfix_VERSION_MINOR 0)
set(quickfix_VERSION_PATCH 1)
set(quickfix_VERSION ${quickfix_VERSION_MAJOR}.${quickfix_VERSION_MINOR}.${quickfix_VERSION_PATCH} )

set(quickfix_SOURCES
  Acceptor.cpp
  DataDictionary.cpp
  DataDictionaryProvider.cpp
  Dictionary.cpp
  FieldConvertors.cpp
  FieldMap.cpp
  FieldTypes.cpp
  FileLog.cpp
  FileStore.cpp
  Group.cpp
  HttpConnection.cpp
  HttpMessage.cpp
  HttpParser.cpp
  HttpServer.cpp
  Initiator.cpp
  Log.cpp
  Message.cpp
  MessageSorters.cpp
  MessageStore.cpp
  MySQLLog.cpp
  MySQLStore.cpp
  NullStore.cpp
  OdbcLog.cpp
  OdbcStore.cpp
  Parser.cpp
  PostgreSQLLog.cpp
  PostgreSQLStore.cpp
  pugixml.cpp
  PUGIXML_DOMDocument.cpp
  Session.cpp
  SessionFactory.cpp
  SessionSettings.cpp
  Settings.cpp
  SocketAcceptor.cpp
  SocketConnection.cpp
  SocketConnector.cpp
  SocketInitiator.cpp
  SocketMonitor.cpp
  SocketServer.cpp
  stdafx.cpp
  ThreadedSocketAcceptor.cpp
  ThreadedSocketConnection.cpp
  ThreadedSocketInitiator.cpp
  TimeRange.cpp
  Utility.cpp
)

if (HAVE_SSL)
  set (quickfix_SOURCES ${quickfix_SOURCES}
    SSLSocketAcceptor.cpp
    SSLSocketConnection.cpp
    SSLSocketInitiator.cpp
    ThreadedSSLSocketAcceptor.cpp
    ThreadedSSLSocketConnection.cpp
    ThreadedSSLSocketInitiator.cpp
    UtilitySSL.cpp)
endif()

if (WIN32)
  add_library(${PROJECT_NAME} STATIC  ${quickfix_SOURCES})
  set_target_properties (${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX d)
  target_link_libraries(${PROJECT_NAME} ${OPENSSL_LIBRARIES} ${MYSQL_CLIENT_LIBS} ${PostgreSQL_LIBRARIES} ws2_32)
else()
  add_library(${PROJECT_NAME} SHARED  ${quickfix_SOURCES})
  target_link_libraries(${PROJECT_NAME} ${OPENSSL_LIBRARIES} ${MYSQL_CLIENT_LIBS} ${PostgreSQL_LIBRARIES} pthread)
endif()

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/ DESTINATION include/quickfix
        FILES_MATCHING PATTERN "*.h"
        PATTERN double-conversion EXCLUDE
        PATTERN test EXCLUDE)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../ INTERFACE ${CMAKE_CURRENT_BINARY_DIR}/include )
if (HAVE_SHARED_PTR_IN_STD_NAMESPACE)
  target_compile_definitions(${PROJECT_NAME} INTERFACE HAVE_STD_SHARED_PTR=1)
elseif(HAVE_SHARED_PTR_IN_TR1_NAMESPACE)
  target_compile_definitions(${PROJECT_NAME} INTERFACE HAVE_STD_TR1_SHARED_PTR=1)
elseif(HAVE_SHARED_PTR_IN_TR1_NAMESPACE_FROM_TR1_MEMORY_HEADER)
  target_compile_definitions(${PROJECT_NAME} INTERFACE HAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER=1)
endif()

if (HAVE_UNIQUE_PTR_IN_STD_NAMESPACE)
 target_compile_definitions(${PROJECT_NAME} INTERFACE HAVE_STD_UNIQUE_PTR=1)
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${quickfix_VERSION} SOVERSION ${quickfix_VERSION_MAJOR} )

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/ DESTINATION include/quickfix
        FILES_MATCHING PATTERN "*.h"
        PATTERN double-conversion EXCLUDE
        PATTERN test EXCLUDE)
