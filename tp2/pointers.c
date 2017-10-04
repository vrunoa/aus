#include <stdio.h>

int main() {
  int v[100];
  int *p;

  for (int i=0; i<8;i++){
    v[i] = i;
  }

  p = v;

  printf("Recorrido sobre el vector\n");
  for (int i=0; i<8;i++) {
    printf("%d\t", v[i]);
  }

  printf("\nRecorrido sobre el puntero\n");
  for (int i=0; i<8;i++) {
    printf("%d\t", *(p+i));
  }

  printf("\nDIFERENCIA ENTRE * p ++ y (* p ) ++ \n");
  printf("\nAhora voy a recorrer el vector utilizando (* p ) ++\n");
  for (int i=0; i<8; i++) {
    printf("%d\t", (*p)++);
  }

  printf("\nAhora voy a recorrer el vector utilizando *(p+i)\n");
  for (int i=0; i<8; i++) {
    printf("%d\t", *(p+i));
  }

  p = v;
  printf("\nAhora voy a recorrer el vector utilizando p[i]\n");
  for (int i=0; i<8; i++) {
    printf("%d\t", p[i]);
  }
}
