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
  return i;
}

void reverse(int len, char* p, char* r) {
  int pos = len-1;
  for(int i=0;i<len;i++) {
    r[pos] = p[i];
    pos--;
  }
}

int main() {
  char phrase[100];
  readPhrase(phrase);
  int len = getLen(phrase);
  char* r = malloc(len*sizeof(char));
  reverse(len, phrase, r);
  printf("Alvere%s", r);
  return 0;
}
