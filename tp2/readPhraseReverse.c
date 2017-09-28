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

void reverse(int len, char* p) {
  int pos = len-1;
  char aux;
  for(int i=0;i<(len/2);i++) {
    aux = p[i];
    p[i] = p[pos];
    p[pos] = aux;
    --pos;
  }
}

int main() {
  char phrase[100];
  readPhrase(phrase);
  int len = getLen(phrase);
  reverse(len, phrase);
  printf("Alvere\n%s", phrase);
  return 0;
}
