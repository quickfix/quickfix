if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(ordermatch Application.cpp Market.cpp ordermatch.cpp ${applink_SOURCE})

target_include_directories(ordermatch PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include/quickfix ${CMAKE_SOURCE_DIR})


target_link_libraries(ordermatch ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(ordermatch_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ordermatch> ${CMAKE_SOURCE_DIR}/bin/ordermatch)
else()
set_target_properties(ordermatch PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/bin/debug/ordermatch/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/bin/release/ordermatch/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_SOURCE_DIR}/bin/release/ordermatch/)
endif()                   

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )
add_subdirectory(test)
endif()


