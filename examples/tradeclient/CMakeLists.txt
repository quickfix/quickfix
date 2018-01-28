if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(tradeclient Application.cpp tradeclient.cpp ${applink_SOURCE})

target_include_directories(tradeclient PRIVATE ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR})


if (WIN32)
target_link_libraries(tradeclient quickfix Ws2_32)
else()
target_link_libraries(tradeclient quickfix pthread)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(tradeclient_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:tradeclient> ${CMAKE_SOURCE_DIR}/bin/tradeclient)
endif()                  

