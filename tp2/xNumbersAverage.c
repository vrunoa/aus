#include <stdlib.h>
#include <stdio.h>


int askForNumber() {
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  return n;
}

int main() {
  int av = 0, i = 0, n = 0;
  n = askForNumber();
  while (n != 0) {
    i++;
    av+=n;
    n = askForNumber();
  }
  if (i == 0) {
    printf("No ha ingresado ningun numero");
    return 0;
  }
  printf("cant: %d total: %d promedio: %d\n", i, av, av/i);
  return 0;
}
