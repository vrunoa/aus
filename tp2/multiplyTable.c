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
  renderLine();
  for (int i=1;i<=10;i++) {
    for (int j=1;j<=10;j++) {
      render(j, i*j);
    }
    renderLine();
  }  
  return 0;
}
