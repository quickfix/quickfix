if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(tradeclient Application.cpp tradeclient.cpp ${applink_SOURCE})

target_include_directories(tradeclient PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../)

target_link_libraries(tradeclient PRIVATE ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(tradeclient_target ALL
  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:tradeclient> ${CMAKE_CURRENT_SOURCE_DIR}/../../bin/tradeclient)
else()
set_target_properties(tradeclient PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/../../bin/debug/tradeclient/
  RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/../../bin/release/tradeclient/
  RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_SOURCE_DIR}/../../bin/release/tradeclient/)
endif()    

