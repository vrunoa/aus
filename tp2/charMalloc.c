#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readWord(){
  char p[256];
  printf("Ingrese una palabra:");
  scanf("%[^,'\n ']", p);
  char *cp = (char *) malloc(sizeof(char)*strlen(p));
  strcpy(cp, p);
  return cp;
}


int main(){
  char * word = readWord();
  printf("%s\t tiene %d letras", word, (int)strlen(word));
  return 0;
}
