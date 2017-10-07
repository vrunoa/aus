#include <stdio.h>
#include <stdlib.h>

int readCant(){
  int d;
  printf("Ingrese la Cantidad de numeros que desea leer:");
  scanf("%d", &d);
  return d;
}

int askNumber(){
  int d;
  printf("Ingrese un numero:\n");
  scanf("%d", &d);
  return d;
}

void readNumbers(int c, int* numbers) {
  for(int i=0;i<c;i++){
    *(numbers+i) = askNumber();
  }
}

void showNumbers(int c, int* numbers) {
  printf("Numeros ingresados:\n");
  for(int i=0;i<c;i++){
    printf("%d\t", *(numbers+i));
  }
}

int main(){
  int c = readCant();
  int* a = (int*) malloc(sizeof(int)*c);
  readNumbers(c, a);
  showNumbers(c, a);
  return 0;
}
