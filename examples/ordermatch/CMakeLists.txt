if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(ordermatch Application.cpp Market.cpp ordermatch.cpp ${applink_SOURCE})

target_include_directories(ordermatch PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/quickfix ${PROJECT_SOURCE_DIR})


target_link_libraries(ordermatch ${PROJECT_NAME})

if (NOT WIN32)
ADD_CUSTOM_TARGET(ordermatch_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ordermatch> ${PROJECT_SOURCE_DIR}/bin/ordermatch)
else()
set_target_properties(ordermatch PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/bin/debug/ordermatch/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/bin/release/ordermatch/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/bin/release/ordermatch/)
endif()