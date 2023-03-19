#include <iostream>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

int main() {
  int n = 5;
  int result = factorial(n);
  std::cout << n << "! = " << result << std::endl;
  return 0;
}
