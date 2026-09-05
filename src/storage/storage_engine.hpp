#pragma once

#include "wal.hpp"

#include <string>
#include <unordered_map>

namespace replicati {

class StorageEngine {
private: 
  std::unordered_map<std::string, std::string> data_;
  Wal wal_;


public:
  std::optional<std::string> get(const std::string& key);
  void set(const std::string& key, const std::string& value);
};

}