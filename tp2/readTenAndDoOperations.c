#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int readNumber(){
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  return n;
}

float calc(int* arr, char op) {
  float res = arr[0];
  int len = sizeof(arr);
  for (int i=1; i<len; i++) {
    switch (op) {
      case '+': res+=arr[i]; break;
      case '-': res-=arr[i]; break;
      case '*': res*=arr[i]; break;
      case '/': res/=arr[i]; break;
    }
  }
  return res;
}

int main() {
  int arr[10];
  for (int i = 0; i<10; i++) {
    arr[i] = readNumber();
  }
  printf("Suma %f\n", calc(arr, '+'));
  printf("Resta %f\n", calc(arr, '-'));
  printf("Multiplicacion %f\n", calc(arr, '*'));
  printf("Division %f\n", calc(arr, '/'));
  return 0;
}
