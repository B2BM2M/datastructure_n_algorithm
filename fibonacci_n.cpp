#include <iostream>

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {
  int n = 8;
  int result = fibonacci(n);
  std::cout << "The " << n << "th Fibonacci number is " << result << std::endl;
  return 0;
}
