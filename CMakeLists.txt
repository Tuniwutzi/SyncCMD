cmake_minimum_required (VERSION 3.9.2)

set(_CD ${CMAKE_CURRENT_SOURCE_DIR})
set(TARGET_NAME "SyncCMD")

project (${TARGET_NAME})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory("dependencies/synclib")

add_executable(${TARGET_NAME}
    "${_CD}/src/main.cpp"
)

set(HEADER_SEARCH_PATHS
    "${_CD}/generated_src/cpp/"
    "${_CD}/dependencies/synclib/include/"
    "${_CD}/dependencies/synclib/dependencies/cppsupport/")
target_include_directories(${TARGET_NAME} PUBLIC
    ${HEADER_SEARCH_PATHS}
)
target_link_libraries(${TARGET_NAME}
	synclib
    cppsupport)