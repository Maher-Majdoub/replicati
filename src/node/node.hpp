#pragma once

#include <string>
#include <optional>
#include <unordered_map>

namespace replicati {

enum NodeRole {
  LEADER,
  FOLLOWER
};

class Node {
private:
  NodeRole _role;
  std::unordered_map<std::string, std::string> _storage;


public:
  Node(NodeRole role);

  inline NodeRole getRole() { return this->_role; }

  std::optional<std::string> get(const std::string& key);
  void set(const std::string& key, const std::string& value);
};

}