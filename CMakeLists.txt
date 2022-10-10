cmake_minimum_required(VERSION 3.2)
project(clevenshtein VERSION 0.0.1 LANGUAGES C)

option(BUILD_CLEV_EXAMPLE "Set to ON to build clevenshtein example." OFF)

add_library(clevenshtein STATIC levenshtein.c levenshtein.h)

target_include_directories(clevenshtein PUBLIC .)

set_target_properties(clevenshtein PROPERTIES VERSION ${PROJECT_VERSION})

if(BUILD_CLEV_EXAMPLE)
  add_subdirectory(example)
endif()
