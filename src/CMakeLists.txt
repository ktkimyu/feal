SET(SRC_DIR
    common
    mesh)

foreach(directory ${SRC_DIR})
    add_subdirectory(${directory})
endforeach()

# Create a library containing all the libraries
add_library(Feal INTERFACE)

target_link_libraries(Feal INTERFACE
    Mesh)

install(TARGETS Feal
    EXPORT "${TARGET_EXPORT_NAME}Targets"
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )

# Install all header files
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/feal 
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h"
    )


