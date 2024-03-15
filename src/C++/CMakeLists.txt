add_subdirectory(test)

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
  HostDetailsProvider.cpp
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
  SocketServer.cpp
  stdafx.cpp
  ThreadedSocketAcceptor.cpp
  ThreadedSocketConnection.cpp
  ThreadedSocketInitiator.cpp
  TimeRange.cpp
  Utility.cpp
)

if (WIN32)
  list(APPEND quickfix_SOURCES SocketMonitor_WIN32.cpp)
else()
  list(APPEND quickfix_SOURCES SocketMonitor_UNIX.cpp)
endif()

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
  target_link_libraries(${PROJECT_NAME} ${OPENSSL_LIBRARIES} ${MYSQL_CLIENT_LIBS} ${PostgreSQL_LIBRARIES} ws2_32 crypt32)
else()
   if (QUICKFIX_SHARED_LIBS)
	   add_library(${PROJECT_NAME} SHARED  ${quickfix_SOURCES})
   else()
	   add_library(${PROJECT_NAME} STATIC  ${quickfix_SOURCES})
  endif()
  target_link_libraries(${PROJECT_NAME} ${OPENSSL_LIBRARIES} ${MYSQL_CLIENT_LIBS} ${PostgreSQL_LIBRARIES} pthread)
endif()

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_11)
target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/C++)

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${quickfix_VERSION} SOVERSION ${quickfix_VERSION_MAJOR} )

install(TARGETS ${PROJECT_NAME} DESTINATION lib)

get_target_property(debug_postfix ${PROJECT_NAME} DEBUG_POSTFIX)
if(${debug_postfix} STREQUAL debug_postfix-NOTFOUND)
   set (debug_postfix "")
else()
   if(CMAKE_BUILD_TYPE)
       string(TOUPPER ${CMAKE_BUILD_TYPE} build_type)
       if(NOT ${build_type} STREQUAL DEBUG)
          set (debug_postfix "")
       endif()
   endif()
endif()
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_BUILD_TYPE}/${PROJECT_NAME}${debug_postfix}.pdb:${PROJECT_NAME} DESTINATION lib OPTIONAL)


install(DIRECTORY ${PROJECT_SOURCE_DIR}/src/C++/ DESTINATION include/quickfix
        FILES_MATCHING PATTERN "*.h"
        PATTERN double-conversion EXCLUDE
        PATTERN test EXCLUDE)
