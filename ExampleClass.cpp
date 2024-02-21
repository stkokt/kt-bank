#include <iostream>
#include <vector>

class ExampleClass {
 private:
  std::string privateVar;
  size_t privateVar2;

  void privateMethod(int param);
  void privateMethod1(int& param1);

 public:
  char publicVar;
  std::vector<int> publicVar1;

  std::string publicMethod(std::string param);
  void publicMethod(char param1);
};
