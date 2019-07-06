cmake_minimum_required(VERSION 3.10)
project(bench_quick)
set(CMAKE_CXX_STANDARD 17)

include_directories(
  .
  )

if (WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
else ()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")
endif ()

set(COMMON_SOURCE
  main.cpp
  )

set(BENCHMARK_DOWNLOAD_DEPENDENCIES ON)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF)
include_directories(SYSTEM thirdparty/benchmark/include)
add_subdirectory(thirdparty/benchmark)

include_directories(SYSTEM thirdparty/dutil/source)
add_subdirectory(thirdparty/dutil)

add_executable(${PROJECT_NAME} ${COMMON_SOURCE})

set(COMMON_LIBS benchmark dutil)
if (WIN32)
  target_link_libraries(${PROJECT_NAME} ${COMMON_LIBS})
else ()
  target_link_libraries(${PROJECT_NAME} ${COMMON_LIBS} pthread)
endif ()
