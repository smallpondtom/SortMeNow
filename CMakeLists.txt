cmake_minimum_required(VERSION 3.10) 
project(SortMeNow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SOURCES "src/*.cpp" "src/*.c" "src/*.hpp" "src/*.h")
add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory("${PROJECT_SOURCE_DIR}/SortAlgorithm")
# add_subdirectory("${PROJECT_SOURCE_DIR}/external/eigen")

# find_package(Eigen3 REQUIRED NO_MODULE)

target_include_directories(${PROJECT_NAME}
  PRIVATE "${PROJECT_SOURCE_DIR}/SortAlgorithm"
  # PUBLIC ${EIGEN3_INCLUDE_DIR}
)

target_link_directories("${PROJECT_NAME}"
  PRIVATE "${PROJECT_SOURCE_DIR}/SortAlgorithm"
)

target_link_libraries("${PROJECT_NAME}"
  PRIVATE sortlib
)
