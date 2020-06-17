#include <stdio.h>

int maior(int a, int b) { // passagem por valor
    return a > b;
}

void ordena(int *p, int (*funcao)(int a, int b)) { // passagem por referencia - altero a variavel de fora
   for(int i=0; i < 10; i++) {
       for(int j=i; j < 10; j++) {
           if ((*funcao)(p[i], p[j])) {
               int aux = p[i];
               p[i] = p[j];
               p[j] = aux;
           } 
       }
   }   
}

void imprime(int *v) {
    for(int i=0; i<10; i++) {
        printf("%d, ", v[i]);
    }
}

int main() {
    int vetor[] = {5, 6, 9, 8, 1, 3, 6, 2, 4, 7};

    ordena(vetor, maior);

    imprime(vetor);

    // ordena(vetor, menor);

    // imprime(vetor);

    return 0;
}
