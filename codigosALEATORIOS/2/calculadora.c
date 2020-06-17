#include "calculadora.h"

int somar(int x, int y) {
 return x + y;
}
int subtrair(int x, int y) {
 return x - y;
}
int multiplicar(int x, int y) {
 return x * y;
}
int dividir(int x, int y) {
 if (y != 0){
 return x / y;
}
else {
 
 return INFINITO;
}
} 
