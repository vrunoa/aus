#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  printf ("Ingrese el numero de asteriscos a mostrar:");
  scanf("%d", &n);
  char* p = (char*)malloc(n*sizeof(char));
  for(int i=0;i<n;i++) {
    strcpy(&p[i], "*");
  }
  printf("%s\n", p);
  free(p);
  return 0;
}
