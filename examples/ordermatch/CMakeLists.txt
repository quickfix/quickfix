add_executable(ordermatch Application.cpp Market.cpp ordermatch.cpp)

target_include_directories(ordermatch PRIVATE ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR})


if (WIN32)
target_link_libraries(ordermatch quickfix Ws2_32)
else()
target_link_libraries(ordermatch quickfix pthread)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(ordermatch_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ordermatch> ${CMAKE_SOURCE_DIR}/bin/ordermatch)
endif()                  

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )
add_subdirectory(test)
endif()


