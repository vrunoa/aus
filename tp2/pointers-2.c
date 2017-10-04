#include <stdlib.h>
#include <stdio.h>

int main() {
  int i=5, j[]={1,2,3,4,5,6,7,8,9,10};
  char x = 'a', pal [] ="texto en c";
  int *pi = &i;
  char *pc;

  printf("Dirección i:%p\t Valor: %d", &i, i);

  pi = &i;
  printf("\nDirección i:%p\t Valor: %d", &pi, *pi);

  int len = (int)(sizeof(j)/sizeof(*j));
  printf("\n");
  for (int k=0; k<len; k++) {
    printf("\nDirección j:%p\t Valor: %d", &j[k], j[k]);
  }

  printf("\n");
  for (int k=0; k<len; k++) {
    printf("\nDirección j por puntero:%p\t Valor: %d", j+k, *(j+k));
  }

  printf("\n\n");
  printf("Dirección c:%p\t Valor: %c\n", &x, x);

  int c = 0;
  while(pal[c] != '\0') {
    printf("\nDirección pal:%p\t Valor: %c", &pal[c], pal[c]);
    c++;
  }

  printf("\n\nLargo pal %d", len);
  for (int k=0; k<len; k++) {
    printf("\nDirección pal por puntero:%p\t Valor: %c", pal+k, *(pal+k));
  }
}
