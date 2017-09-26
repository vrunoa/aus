#include <stdlib.h>
#include <stdio.h>


int askForNumber() {
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  return n;
}

int main() {
  int av = 0;
  for (int i=1;i<=10;i++) {
    av += askForNumber();
  }
  printf("total: %d promedio: %d\n", av, av/10);
  return 0;
}
