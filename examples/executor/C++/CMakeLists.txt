if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(executor Application.cpp executor.cpp ${applink_SOURCE})

target_include_directories(executor PRIVATE ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR})

if (WIN32)
target_link_libraries(executor quickfix Ws2_32)
else()
target_link_libraries(executor quickfix pthread)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(executor_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:executor> ${CMAKE_SOURCE_DIR}/bin/executor)
endif()
