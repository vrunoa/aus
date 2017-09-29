#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void readPhrase(char* p){
  printf("Ingrese una frase:\n");
  fgets(p, 100, stdin);
}

int getLen(char* p) {
  int i = 0;
  while (p[i] != '\0'){
    i++;
  }
  return i-1;
}

int main() {
  char phrase[100];
  readPhrase(phrase);
  int len = getLen(phrase), pos = len-1;
  for(int i=0;i<(len/2);i++) {
    if (phrase[i] != phrase[pos]){
      printf("No es un palindromo");
      return 0;
    }
    pos--;
  }
  printf("Es un palindromo \\o/");
  return 0;
}
