#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

int isVowel(char p) {
  switch (p) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': return 1;
  }
  return 0;
}

int main() {
  char phrase[100];
  readPhrase(phrase);
  int len = getLen(phrase), count = 0;
  for (int i=0; i<len; i++){
    if(isVowel(tolower(phrase[i])) == 1){
      count++;
    }
  }
  printf("Hay %d vocales", count);
  return 0;
}
