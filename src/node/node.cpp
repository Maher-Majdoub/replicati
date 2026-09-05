#include "node.hpp"

#include <cassert>
#include <optional>
#include <string>

namespace replicati {

Node::Node(NodeRole role): _role(role) {}

std::optional<std::string> Node::get(const std::string& key) {
  return this->_storage.get(key);
}

void Node::set(const std::string& key, const std::string& value) { 
  // Only leader can accept writes
  assert(this->_role == LEADER);

  this->_storage.set(key, value);
}

}