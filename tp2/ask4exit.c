#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void askForExit(char* q){
  printf("desea salir (S/N)\n");
  scanf("%s", q);
}

int main() {
  char* q = malloc(1*sizeof(char));
  while(strcmp(q,"s") != 0) {
    askForExit(q);
    printf("%s\n", q);
  }
  free(q);
  printf("Thank you! Come again!");
  return 0;
}
