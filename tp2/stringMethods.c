#include <stdio.h>
#include <stdlib.h>
#include "stringMethods.h"

int strLargo(const char *origen) {
  char c;
  int len = 0;
  while((*(origen+len)) != '\0'){
    len++;
  }
  return len;
}

int strVacio(const char* origen){
  int len = strLargo(origen);
  return len == 0 ? 0 : 1;
}

void strCopia(char* origen, const char* copia) {

}

int main(){
  char *text1 =" Sera Cierto ?? ";
  int lenText1 = strLargo(text1);
  char *result = (char *)malloc(lenText1);
  char* reves;
  if(result == NULL)
    return -1;
  printf("La cadena: %s", text1);
  printf("\nSe encuentra: %s\n",(strVacio(text1) ? "No vacia" : "Vacia"));
  printf("Largo cadena: %d\n", lenText1);
}
