# CMakeList.txt : CMake project for AlgeTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.5)
project (AlgeTest)
SET (CMAKE_CXX_FLAGS "-std=c++11 -O3")
# The version number
set (AlgeTest_VERSION_MAJOR 0.1)
set (AlgeTest_VERSION_MINOR 0.0)

option(USE_NUM "Use numer tools" ON)
# configure a header file to pass some of the CMake settings to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/AlgeTestConfig.h.in"
  "${PROJECT_BINARY_DIR}/AlgeTestConfig.h"
)

# add the binary tree to the search path for include files so that we will find AlgeTestConfig.h
include_directories ("${PROJECT_BINARY_DIR}")

if (USE_NUM)
  include_directories ("${PROJECT_SOURCE_DIR}/Numer")
  add_subdirectory (Numer)
  set (EXTER_LIBS ${EXTRA_LIBS} Numer)
endif ()

# Add source to this project's executable.
add_executable (AlgeTest "AlgeTest.cpp" "AlgeTest.h")
target_link_libraries (AlgeTest ${EXTRA_LIBS})

# TODO: Add tests and install targets if needed.
install (TARGETS AlgeTest DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/AlgeTestConfig.h" DESTINATION include)
