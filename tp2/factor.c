#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, fact;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  fact = n;
  for (int i=(n-1);i>=1;i--) {
    fact*= i;
  }
  printf("factorial de %d -> %d\n", n, fact);
  return 0;
}
