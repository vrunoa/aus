#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  int sum = 0;
  for (int i=1;i<=100;i+=2) {
    sum+=i;
  }
  printf ("\n%d", sum);
  return 0;
}
