#include <stdio.h>

int main(void) {
  int i = 8, *pi=&i;
  long long l = 8, *pl=&l;
  float f = 102.8f, *pf=&f;
  double d=678.44, *pd=&d;
  int vec[100];
  vec[0] = 44;
  printf("variable int, tam.bytes: %d\tdir.&i: %p\tvalor: %d\n", (int)sizeof(i), &i, i);
  printf("puntero int, tam.bytes= %d\tdir.&pi: %p \tvalor: %p\n", (int)sizeof(pi), &pi, pi);
  printf("variable long, tam.bytes: %d\tdir.&l: %p \tvalor: %lld\n", (int)sizeof(l), &l, l);
  printf("puntero long, tam.bytes: %d \tdir.&pl: %p \tvalor: %p\n", (int)sizeof(pl), &pl, pl);
  printf("variable float, tam.bytes: %d \tdir.&f: %p \tvalor: %.1f\n", (int)sizeof(f), &f, f);
  printf("puntero float, tam.bytes: %d \tdir.&pf: %p \tvalor: %p\n", (int)sizeof(pf), &pf, pf);
  printf("variable double, tam.bytes: %d \tdir.&d: %p \tvalor: %.2lf\n", (int)sizeof(d), &d, d);
  printf("puntero double, tam.bytes: %d \tdir.&pd: %p \tvalor: %p\n", (int)sizeof(pd), &pd, pd);
  printf("variable array, tam.bytes: %d \tdir.&vec[0]: %p \tvalor: %d\n", (int)sizeof(vec[0]), &vec[0], vec[0]);
  printf("puntero array, tam.bytes: %d \tdir.&vec: %p \tvalor: %p\n", (int)sizeof(vec), &vec, vec);
  return 0;
}
