#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}

namespace my_namespace {
int my_function() { return 42; }
} // namespace my_namespace

class MyClass {
public:
  int my_method() { return 42; }
};

void my_function() { std::cout << "Hello, World!" << std::endl; }

int variable = 42;
