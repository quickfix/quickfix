# Needed to build examples with parallel builds
add_custom_target(do_always ALL 
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix40
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix40/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix40/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix41
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix41/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix41/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix42
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix42/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix42/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix43
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix43/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix43/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix44
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix44/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix44/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix50
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix50/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix50/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp1
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix50sp1/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp1/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp2
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fix50sp2/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp2/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fixt11
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fixt11/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/fixt11/
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/wx
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/C++/fixt11/*.h ${CMAKE_SOURCE_DIR}/include/quickfix/wx/)
