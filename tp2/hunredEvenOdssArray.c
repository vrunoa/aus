#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void showAsc(int* arr, int n){
  for (int i=0;i<n;i++) {
    printf("%d ", arr[i]);
  }
}

void showDesc(int* arr, int n){
  for (int i=(n-1);i>=0;i--) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int even[50], odd[50], ie = 0, io = 0;
  for (int i=1;i<=100;i++) {
    if ((i%2) == 0) {
      even[ie] = i;
      ie++;
    } else {
      odd[io] = i;
      io++;
    }
  }
  printf("pares ascendente\n");
  showAsc(even, 50);
  printf("\npares descendente\n");
  showDesc(even, 50);
  printf("\nimpares ascendente\n");
  showAsc(odd, 50);
  printf("\nimpares descendente\n");
  showDesc(odd, 50);
  return 0;
}
