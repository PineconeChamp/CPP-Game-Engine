cmake_minimum_required(VERSION 3.10.0)
project(Pine_Engine VERSION 0.1.0 LANGUAGES C CXX)

# C++ Standard and Optimization Flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")

# Collect all source files
file(GLOB SOURCES "*.cpp")
file(GLOB CORE_SOURCES "core/*.cpp")
file(GLOB RENDERER_SOURCES "renderer/*.cpp")

# Create executable
add_executable(game ${SOURCES} ${CORE_SOURCES} ${RENDERER_SOURCES})

# Include directories
target_include_directories(game PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/core
    ${CMAKE_SOURCE_DIR}/systems
    ${CMAKE_SOURCE_DIR}/renderer
    /include
)

# Link libraries
target_link_libraries(game PRIVATE
    raylib
    GL
    m
    pthread
    dl
    X11
)

# Custom test target
add_custom_target(test
    COMMAND ./build/game
    DEPENDS game
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

# Clean target (CMake provides this by default, but can be customized if needed)
add_custom_target(clean-game
    COMMAND ${CMAKE_COMMAND} -E remove ${CMAKE_BINARY_DIR}/game
    COMMENT "Removing game executable"
)

