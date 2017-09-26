#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  int sum = 0, count = 0;
  for (int i=1;i<=100;i+=2) {
    count++;
    sum+=i;
  }
  printf ("\n%d, count %d", sum, count);
  return 0;
}
