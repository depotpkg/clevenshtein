cmake_minimum_required(VERSION 3.2)
project(clevenshtein VERSION 1.0.0 LANGUAGES C)

option(BUILD_CLEV_EXAMPLE "Set to ON to build clevenshtein example." OFF)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

add_library(clevenshtein STATIC levenshtein.c levenshtein.h)

target_include_directories(clevenshtein
    PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

target_compile_definitions(clevenshtein PRIVATE CLEV_IMPLEMENTATION)

set_target_properties(clevenshtein PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(clevenshtein PROPERTIES PUBLIC_HEADER levenshtein.h)

if(BUILD_CLEV_EXAMPLE)
  add_subdirectory(example)
endif()

configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/config.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
)

# Install
install(TARGETS clevenshtein
    EXPORT clevenshtein-targets
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    PUBLIC_HEADER DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)

install(EXPORT clevenshtein-targets
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
)

install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
)
