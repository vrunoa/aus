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

void render(int n){
  if ((n%10) == 1) {
    renderLine();
  }
  printf("| %d ", n);
  if ((n%10) == 0){
    printf("|");
  }
}

int main() {
  for (int i=1;i<=100;i++) {
    render(i);
  }
  renderLine();
  return 0;
}
