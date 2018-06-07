add_executable(ordermatch_ut ordermatch_ut.cpp Market.cpp)

target_include_directories(ordermatch_ut PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../ ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

target_link_libraries(ordermatch_ut PRIVATE ${PROJECT_NAME} PRIVATE UnitTest++)



