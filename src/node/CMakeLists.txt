add_library(node)

target_sources(node
  PRIVATE 
    node.cpp

  PUBLIC 
    FILE_SET HEADERS
    BASE_DIRS
      .
    FILES
      node.hpp
)