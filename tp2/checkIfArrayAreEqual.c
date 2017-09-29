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
  char phrase[100], phrase2[100];
  readPhrase(phrase);
  readPhrase(phrase2);
  int len = getLen(phrase), len2 = getLen(phrase2);
  if (len != len2){
    printf("Los arreglos tiene diferente tamaños por lo cual no son identicos");
    return 0;
  }
  for (int i=0;i<len;i++){
    if (phrase[i] != phrase2[i]){
      printf("Los difieren en la posicion %d, %c != %c", i, phrase[i], phrase2[i]);
      return 0;
    }
  }
  printf("Los arreglos son identicos \\o/");
  return 0;
}
