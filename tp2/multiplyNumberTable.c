#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void renderLine(){
  printf("\n");
  for (int i=0;i<10;i++) {
    printf("_____");
  }
  printf("\n");
}

void render(int j, int v){
  printf("| %d ", v);
  if (j == 10){
    printf("|");
  }
}

int main() {
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);
  renderLine();
  for (int i=1;i<=10;i++) {
    render(i, i*n);
  }
  renderLine();
  return 0;
}
