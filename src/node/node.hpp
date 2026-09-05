#pragma once

#include "../storage/storage_engine.hpp"

#include <string>
#include <optional>

namespace replicati {

enum NodeRole {
  LEADER,
  FOLLOWER
};

class Node {
private:
  NodeRole _role;
  StorageEngine _storage;


public:
  Node(NodeRole role);

  inline NodeRole getRole() { return this->_role; }

  std::optional<std::string> get(const std::string& key);
  void set(const std::string& key, const std::string& value);
};

}