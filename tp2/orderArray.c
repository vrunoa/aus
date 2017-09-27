#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int readNumber(){
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  return n;
}

int* order(int* arr) {
  int aux;
  for (int i=0; i<2;i++) {
    for (int j=1; j<3;j++) {
      if(arr[i] > arr[j]) {
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
      }
    }
  }
  return arr;
}

int main() {
  int arr[3];
  for (int i = 0; i<3; i++) {
    arr[i] = readNumber();
  }
  int* arr2 = order(arr);
  printf("Ordenado:\n");
  for (int i=0;i<3;i++){
    printf("%d\n", arr2[i]);
  }
  return 0;
}
