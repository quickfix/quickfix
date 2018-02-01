add_executable(ordermatch_ut ordermatch_ut.cpp Market.cpp)

target_include_directories(ordermatch_ut PRIVATE 
  ${CMAKE_SOURCE_DIR}/src/C++ ${CMAKE_SOURCE_DIR} 
  ${CMAKE_SOURCE_DIR}/examples/ordermatch
  ${CMAKE_SOURCE_DIR}/UnitTest++/src)


target_link_libraries(ordermatch_ut ${PROJECT_NAME} UnitTest++)




