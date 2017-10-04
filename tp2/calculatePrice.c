#include <stdlib.h>
#include <stdio.h>

float askForKg(){
  float n;
  printf("Ingrese la cantidad de kilos del producto:\n");
  scanf("%f", &n);
  return n;
}

float askForPriceByKg(){
  float n;
  printf("Ingrese el precio por kilo del producto:\n");
  scanf("%f", &n);
  return n;
}

int hasDiscount(float p){
  if (p >= 100) return 1;
  return 0;
}

float addDiscount(float p) {
  return p-p*0.1;
}

void calculatePrice(float kg, float p, float* s){
  float f = kg*p;
  if (hasDiscount(f)) {
    f = addDiscount(f);
  }
  *s = f;
}

int main() {
  float kg = askForKg(), p = askForPriceByKg();
  float *s;
  calculatePrice(kg, p, s);
  printf("Precio final %.2f\n", *s);
}
