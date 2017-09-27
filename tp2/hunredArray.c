#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  int p[100];
  for (int i=1;i<=100;i++) {
    p[i] = i;
  }
  printf("ascendente\n");
  for (int i=1;i<=100;i++) {
    printf("%d ", p[i]);
  }
  printf("\ndescendente\n");
  for (int i=100;i>=1;i--) {
    printf("%d ", p[i]);
  }
  return 0;
}
