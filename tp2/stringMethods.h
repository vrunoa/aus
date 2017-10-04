#include <stdio.h>
#include <stdlib.h>

typedef enum { MAYUSCULAS, MINUSCULAS } may_min;
int strLargo(const char*); //Cantidad de caracteres
int strVacio(const char*); //retorna 1 si tiene al menos un caracter, 0 en otro caso
void strCopia(char*, const char*); // Copiador
/*prototipo modificado para permitir argumentos de tipo string literales, en casi todos los
compiladores un literal string es considerado una constante, o sea la función no podría
modificarlos pero, en algunos compiladores tales como GCC es posible modificarlos (según
K&R el comportamiento es indefinido)*/
char* reverse(char*);//retorna una cadena que es string invertida
void strIzq(char*, const char*); // Saca blancos Izq.
void strDer(char*, const char*); // Saca blancos Der.
void strAmbos(char*, const char*); // Saca blancos Izq. y Der.
void strMayMin(char*, const char*, may_min); // Convierte May. Min.
