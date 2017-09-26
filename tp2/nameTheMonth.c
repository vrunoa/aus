#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int askForMonth(){
  int m;
  printf("Ingrese el numero del mes [1-12]\n");
  scanf("%d", &m);
  return m;
}

int validMonth(int m){
  if(m <=0 || m > 12) {
    return 1;
  }
  return 0;
}

int main() {
  int m = 0;
  m = askForMonth();
  while (validMonth(m) == 1){
    printf("Por favor ingrese un mes valido\n");
    m = askForMonth();
  }
  char* month = malloc(30*sizeof(char));
  switch(m){
    case 1: strcpy(month, "Enero"); break;
    case 2: strcpy(month, "Febrero"); break;
    case 3: strcpy(month, "Marzo"); break;
    case 4: strcpy(month, "Abril"); break;
    case 5: strcpy(month, "Mayo"); break;
    case 6: strcpy(month, "Junio"); break;
    case 7: strcpy(month, "Julio"); break;
    case 8: strcpy(month, "Agosto"); break;
    case 9: strcpy(month, "Septiembre"); break;
    case 10: strcpy(month, "Octubre"); break;
    case 11: strcpy(month, "Noviembre"); break;
    case 12: strcpy(month, "Diciembre"); break;
  }
  printf("Mes %d -> %s\n", m, month);
  return 0;
}
