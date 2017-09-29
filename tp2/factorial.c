#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int factorial(int n) {
  if (n == 1) {
    return 1;
  }
  return n*factorial(n-1);
}

int main() {
  int d, f;
  printf("Ingreses un numero:");
  scanf("%d", &d);
  f = factorial(d);
  printf("Factorial de %d: %d", d, f);
  return 0;
}
