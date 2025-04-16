cmake_minimum_required(VERSION 3.21.1)
project(libssh2-test VERSION 0.0.1)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build shared libs" FORCE) # Force static build of libssh2
add_subdirectory(submodules/libssh2 EXCLUDE_FROM_ALL)

# The code below does not work, and I don't understand why
add_library(${PROJECT_NAME} SHARED src/lib.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE libssh2_static)

# The code below works as expected, uncomment it to test
# add_executable(${PROJECT_NAME}-exe src/main.cpp)
# target_link_libraries(${PROJECT_NAME}-exe PRIVATE libssh2_static)