#include <iostream>
#include "node/node.hpp"

int main() {
  std::cout << "Hello World!\n";

  replicati::Node node = replicati::Node();
  node.sayHello();
}