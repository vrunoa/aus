#include <stdlib.h>
#include <stdio.h>
#include "fibonacci-method.h"

int fibonacci(int n){
  if (n <= 2) {
    return 1;
  }
  int i=1, j=1, k;
  for (int l=2;l<=n;l++) {
    k = i + j;
    i = j;
    j = k;
  }
  return i;
}
