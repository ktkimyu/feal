add_executable(mesh_test test.cpp)

target_link_libraries(mesh_test PRIVATE Mesh)

add_test(NAME mesh_test
    COMMAND mesh_test)
