  
#include <stdio.h>

struct carro_t{
    char *marca;
    int ano;
    double valor;
};
typedef struct carro_t Carro_t;
int main(){
	system("color 7c");
    Carro_t carro;
    carro.marca = "Ferrari";
    carro.ano = 2010;
    carro.valor = 7200000.99;
    double valor_depreciado = carro.valor - (2020 - carro.ano)*0.01*carro.valor;
    printf("%lf\n", valor_depreciado);
    
    return 0;
}
