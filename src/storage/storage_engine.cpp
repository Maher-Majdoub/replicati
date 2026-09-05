#include "storage_engine.hpp"


namespace replicati {

std::optional<std::string> StorageEngine::get(const std::string& key) {
  auto it = this->_data.find(key);

  if (it == this->_data.end()) return std::nullopt;
  return it->second;
}

void StorageEngine::set(const std::string& key, const std::string& value) { 
  this->_data[key] = value;
}

}