#include <stdlib.h>
#include <stdio.h>
#include "fibonacci-method.c"

int main() {
  int n = 0;
  printf ("\nfibonacci\n");
  printf ("Ingrese un numero:");
  scanf("%d", &n);
  int fib = fibonacci(n);
  printf ("\nfibonacci en posicion %d: %d\n", n, fib);
  return 0;
}
