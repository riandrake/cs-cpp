cmake_minimum_required(VERSION 3.22)
project(CPlusPlus)

set(CMAKE_CXX_STANDARD 20)

# This would make Windows do the same export as Linux and Mac
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS OFF)

include(GenerateExportHeader)

add_library(HelloWorld SHARED library.cpp)

generate_export_header(HelloWorld
        EXPORT_MACRO_NAME HELLOWORLD_API
        EXPORT_FILE_NAME ${CMAKE_BINARY_DIR}/exports/HelloWorld_export.h
        )

target_precompile_headers(HelloWorld PUBLIC ${CMAKE_BINARY_DIR}/exports/HelloWorld_export.h)
target_compile_definitions(HelloWorld PUBLIC HelloWorld_EXPORTS)
set_target_properties(HelloWorld
        PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Bin/${CMAKE_BUILD_TYPE}
            LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Bin/${CMAKE_BUILD_TYPE}
)


