#include <stdlib.h>
#include <stdio.h>
#include "fibonacci-method.c"

int main() {
  int f = fibonacci(25);
  printf("Fibonacci 25: %d", f);
  return 0;
}
