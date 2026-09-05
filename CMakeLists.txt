cmake_minimum_required(VERSION 3.28)

project(Replicati)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(src/node)
add_executable(replicati)

target_sources(replicati
  PRIVATE 
    src/main.cpp
)

target_link_libraries(replicati
  PRIVATE 
    node
)