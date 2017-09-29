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

int isCapitalLetter(char p) {
  int toInt = (int) p;
  if (toInt >= 65 && toInt <= 90) {
    return 1;
  }
  return 0;
}

int main() {
  char phrase[100];
  readPhrase(phrase);
  int len = getLen(phrase), count = 0;
  for (int i=0; i<len; i++){
    if(isCapitalLetter(phrase[i])) {
      count++;
    }
  }
  printf("Hay %d mayusculas", count);
  return 0;
}
