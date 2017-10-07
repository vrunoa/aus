#include <stdio.h>
#include <stdlib.h>

int readNumber() {
  int d;
  scanf("%d", &d);
  return d;
}

int main(){
  int f,c;
  int** m = NULL;
  printf("Ingrese el numero de filas:");
  f = readNumber();
  printf("Ingrese el numero de columnas:");
  c = readNumber();
  m = (int **)malloc(sizeof(int*)*f);
  for(int i=0; i<f;i++){
    *(m+i) = (int*) malloc(sizeof(int)*c);
  }
  for (int i=0; i<f;i++){
    for(int j=0; j<c;j++) {
      m[i][j] = (i+1)*(j+1);
    }
  }
  printf("Producto:\n");
  for (int i=0; i<f;i++){
    for(int j=0; j<c;j++) {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }
  free(m);
  return 0;
}
