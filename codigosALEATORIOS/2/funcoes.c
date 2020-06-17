#include <stdio.h>

int global_a;

int soma(int i, int j) {
   return i + j;
}

void imprime(int i) {
    printf("%d\n", i);
}

void troca(int *i, int *j) {
    int a = *i;
    *i = *j;
    *j = a;
}

int executa(int param1, int param2, int *result) {
    return 0;
}

int main() {
    int a, b;
    a = 10;
    b = 5;
    imprime(soma(a, b));
    troca(&a, &b);
    printf("%d %d\n", a, b);

    int valor;
    if (executa(a, b, &valor)) {
       valor = valor + 10;
    }
}
