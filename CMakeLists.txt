cmake_minimum_required(VERSION 3.14)
project(clevenshtein VERSION 0.0.1 LANGUAGES C)

add_library(levenshtein STATIC levenshtein.c levenshtein.h)

target_include_directories(levenshtein PUBLIC .)

set_target_properties(levenshtein PROPERTIES VERSION ${PROJECT_VERSION})
