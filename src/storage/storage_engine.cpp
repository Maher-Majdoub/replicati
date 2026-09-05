#include "storage_engine.hpp"


namespace replicati {

std::optional<std::string> StorageEngine::get(const std::string& key) {
  auto it = this->data_.find(key);

  if (it == this->data_.end()) return std::nullopt;
  return it->second;
}

void StorageEngine::set(const std::string& key, const std::string& value) {
  this->wal_.append(key, value); 
  this->data_[key] = value;
}

}