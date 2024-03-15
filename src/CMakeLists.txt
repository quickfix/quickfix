add_subdirectory(C++)

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin" )

if (QUICKFIX_EXAMPLES)
  add_executable(at at.cpp getopt.c)
  
  target_include_directories(at PRIVATE ${PROJECT_SOURCE_DIR} 
    ${PROJECT_SOURCE_DIR}/src/C++)
    
  target_link_libraries(at ${PROJECT_NAME})
  
  if (NOT WIN32)
  ADD_CUSTOM_TARGET(at_target ALL
                    COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:at> ${PROJECT_SOURCE_DIR}/test/at)
  else()
  set_target_properties(at PROPERTIES
                        RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/at/
                        RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/at/
                        RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/at/)
  endif()  
endif()  

if (QUICKFIX_EXAMPLES)
  add_executable(pt pt.cpp getopt.c)
  
  target_include_directories(pt PRIVATE ${PROJECT_SOURCE_DIR} 
    ${PROJECT_SOURCE_DIR}/src/C++)
    
  target_link_libraries(pt ${PROJECT_NAME})
  
  if (NOT WIN32)
  ADD_CUSTOM_TARGET(pt_target ALL
                    COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:pt> ${PROJECT_SOURCE_DIR}/test/pt)
  else()
  set_target_properties(pt PROPERTIES
                        RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/test/debug/pt/
                        RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/test/release/pt/
                        RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/test/release/pt/)
  endif()  
endif()  

endif()

if (HAVE_PYTHON)
add_subdirectory(python)
elseif (HAVE_PYTHON3)
add_subdirectory(python3)
endif ()
