#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int esPrimo(int n) {
  int count = 1;
  for (int i=2; i<=n; i++) {
    printf ("\n%d, %d -> %d", n, i, (n%i));
    if ((n%i) == 0) {
      count++;
    }
  }
  if (count > 2) {
    return 0;
  }
  return 1;
}

int main() {
  int n;
  printf ("\nNumeros primos\n");
  printf ("Ingrese un numero:");
  scanf("%d", &n);
  int isPrime = esPrimo(n);
  char p[5] = "no es";
  if (isPrime == 1) {
    strcpy (p, "es");
  }
  printf ("\n%d %s un numero primo\n", n, p);
  return 0;
}
