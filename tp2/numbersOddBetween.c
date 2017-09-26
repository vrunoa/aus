#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n1, n2;
  printf ("Ingrese el primer numero:");
  scanf("%d", &n1);
  printf ("Ingrese el segundo numero:");
  scanf("%d", &n2);
  if (n2<n1){
    printf ("El segundo valor debe ser mayor al primero, %d > %d", n2, n1);
  }else{
    for(;n1<=n2;n1++) {
      if((n1%2) == 1) {
        printf("%d\n", n1);
      }
    }
  }
  return 0;
}
