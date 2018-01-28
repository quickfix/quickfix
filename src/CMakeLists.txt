add_subdirectory(C++)

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )

if (WIN32)
SET_SOURCE_FILES_PROPERTIES( getopt.c PROPERTIES LANGUAGE CXX )
endif()

add_executable(at at.cpp getopt.c)

target_include_directories(at PRIVATE ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR}/UnitTest++/src)
  
if (WIN32)
target_link_libraries(at quickfix Ws2_32)
else()
target_link_libraries(at quickfix pthread)
endif()


if (WIN32)
set (ut_SOURCES ${CMAKE_SOURCE_DIR}/src/C++/test/TestHelper.cpp)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(at_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:at> ${CMAKE_SOURCE_DIR}/test/at)
endif()

add_executable(ut ut.cpp getopt.c ${ut_SOURCES})

target_include_directories(ut PRIVATE ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR}/UnitTest++/src ${CMAKE_SOURCE_DIR}/src/C++/test/)
  
if (WIN32)
target_link_libraries(ut quickfix UnitTest++ Ws2_32)
else()
target_link_libraries(ut quickfix UnitTest++ pthread)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(ut_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ut> ${CMAKE_SOURCE_DIR}/test/ut)
endif()

add_executable(pt pt.cpp getopt.c)

target_include_directories(pt PRIVATE ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR}/UnitTest++/src)
  
if (WIN32)
target_link_libraries(pt quickfix Ws2_32)
else()
target_link_libraries(pt quickfix pthread)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(pt_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:pt> ${CMAKE_SOURCE_DIR}/test/pt)
endif()      

endif()            
