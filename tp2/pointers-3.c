#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int askForNumber() {
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  return n;
}

void askForMoreNumbers(char* q){
  printf("desea ingresar otro numero ? (S/N)\n");
  scanf("%s", q);
}

int main() {
  int n[100], c = 0;
  char* q = malloc(1*sizeof(char));
  n[c] = askForNumber();
  askForMoreNumbers(q);
  while(strcmp(q,"n") != 0) {
    c++;
    n[c] = askForNumber();
    askForMoreNumbers(q);
    printf("\n --> %s\n", q);
  }
  int len = c+1;
  printf("Vector:\n");
  for (int i=0; i<len;i++) {
    printf("%d\t", *(n+i));
  }

  printf("\nVector inverso:\n");
  for (int i=0; i<len;i++) {
    printf("%d\t", *(n+(c-i)));
  }
}
