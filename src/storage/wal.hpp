#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>
#include <string>

namespace replicati {

/*
  A simple implementation of WAL
  Log entries are saved in memory for now using a vector
  TODO: Implement a real wal service that saves data on disk
*/

struct LogEntry {
  uint64_t index;
  std::string key;
  std::string value;

  LogEntry(uint64_t index, std::string key, std::string value): 
    index(index), key(std::move(key)), value(std::move(value)) {}
};  

class Wal {
private: 
  std::vector<LogEntry> entries_;
  size_t last_index_;


public: 
  Wal();
  void append(const std::string& key, const std::string& value);
  std::vector<LogEntry> get_from(uint64_t index);
};

}