cmake_minimum_required(VERSION 3.28)

project(Replicati)

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