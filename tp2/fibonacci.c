# include <stdlib.h>
# include <stdio.h>

int fibonacci(int n){
  if (n <= 2) {
    return 1;
  }
  int i=1, j=1, k;
  for (int l=2;l<=n;l++) {
    k = i + j;
    i = j;
    j = k;
  }
  return i;
}

int main() {
  int n = 0;
  printf ("\nfibonacci\n");
  printf ("Ingrese un numero:");
  scanf("%d", &n);
  int fib = fibonacci(n);
  printf ("\nfibonacci en posicion %d: %d\n", n, fib);
  return 0;
}
