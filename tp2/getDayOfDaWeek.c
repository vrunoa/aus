#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int askForDay() {
  int n;
  printf("Ingrese el dia de la semana:\n");
  scanf("%d", &n);
  return n;
}

char* getDayOfTheWeek(int c) {
  char *l = "lunes";
  char *m = "martes";
  char *mi = "miercoles";
  char *j = "jueves";
  char *v = "viernes";
  char *s = "sabado";
  char *d = "domingo";
  switch (c) {
    case 2: return m;
    case 3: return mi;
    case 4: return j;
    case 5: return v;
    case 6: return s;
    case 7: return d;
    default: return l;
  }
}

int main() {
  int d = 0;
  char *dp;
  printf("%d\n", d);
  while (d<1 || d>7){
    d = askForDay();
  }
  dp = getDayOfTheWeek(d);
  printf("%p\n", dp);
  printf("Dia de la semana:\n");
  d = 0;
  printf("%s", dp);
}
