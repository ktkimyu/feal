SET(TEST_DIR
    mesh)

foreach(directory ${TEST_DIR})
    add_subdirectory(${directory})
endforeach()

