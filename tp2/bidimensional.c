#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrix[10][10];
  for (int i=1; i<=10;i++){
    for (int j=1; j<=10; j++){
      matrix[i-1][j-1] = i*j;
    }
  }
  printf("Matriz\n");
  for (int i=0; i<10;i++){
    for (int j=0; j<10; j++){
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
