#include <iostream>

void calculate(int &num1, int num2) {
  num1 *= 2;
  num2 += 3;
  std::cout << "Inside calculate: num1 = " << num1 << ", num2 = " << num2 << std::endl;
}

int main() {
  int a = 4;
  int b = 5;
 
  std::cout << "Before calculate: a = " << a << ", b = " << b << std::endl;
  calculate(a, b);
  std::cout << "After calculate: a = " << a << ", b = " << b << std::endl;

  std::cout << "Did this work?\n";
  bool answer;
  std::cin >> answer;

  return 0;
}
