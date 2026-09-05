#include <cctype>
#include <iostream>
#include "node/node.hpp"

using namespace replicati;

int main() {
  Node node = Node(LEADER);

  while (true) {
    std::cout << "% ";

    std::string command, key, value; 
    std::cin >> command;
    
    if (command == "set") {
      std::cin >> key >> value;
      node.set(key, value);
    } 

    else if (command == "get") {
      std::cin >> key;
      auto value = node.get(key);
      std::cout << (value ? *value : "NOT FOUND!") << "\n";
    }
  }
}