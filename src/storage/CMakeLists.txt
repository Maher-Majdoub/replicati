add_library(storage)

target_sources(storage
  PRIVATE 
    storage_engine.cpp

  PUBLIC 
    FILE_SET HEADERS
    BASE_DIRS
      .
    FILES
      storage_engine.hpp
)