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
  add_library(quickfix STATIC  ${quickfix_SOURCES})
else()
  add_library(quickfix SHARED  ${quickfix_SOURCES})
endif()

target_include_directories(quickfix PRIVATE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/src/C++)

set_target_properties(quickfix PROPERTIES VERSION ${quickfix_VERSION} SOVERSION ${quickfix_VERSION_MAJOR} )

target_link_libraries(quickfix ${OPENSSL_LIBRARIES})

install(TARGETS quickfix DESTINATION lib)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/C++/ DESTINATION include/quickfix
        FILES_MATCHING PATTERN "*.h"
        PATTERN double-conversion EXCLUDE
        PATTERN test EXCLUDE)
