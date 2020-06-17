#include <stdio.h>

int main(int argc, char const *argv[]){system("color fC");
    struct carro_t{
        char marca[10];
        int ano;
        float valor;
    };
    
    float valor;
    int carro;
    int anospassados;

    struct carro_t carro_s;

    puts("Escreva a marca do veiculo:\n");
    fflush(stdin);
    fgets(carro_s.marca,10,stdin);
    //fgets-Lê do fluxo para a cadeia de caracteres string até a quantidade de caracteres (tamanho - 1) 
	//ser lida ou até uma nova linha (\n) ou EOF ser encontrado. 

    puts("Escreva o ano do carro:\n");
    fflush(stdin);
    //flush descarrega os buffers de saída de um fluxo de dados.
    //stdin fluxo de entrada.
    scanf("%i", &carro);
    carro_s.ano = carro;

    puts("Escreva o preco do carro quando comprado:\n");
    fflush(stdin);
    scanf("%f", &valor);

    carro_s.valor = valor;

    float valor_depreciado,ValorAtual;

    ValorAtual = carro_s.valor - (2020 - carro_s.ano)*0.01*carro_s.valor;
    valor_depreciado = carro_s.valor-ValorAtual;

    anospassados = 2020-carro_s.ano;

    printf("\nO valor da depreciacao do:\n%sAo decorrer dos %i anos foi:\n%.0f Reais\nO carro valera atualmente:\n%.0f Reais\n",carro_s.marca,anospassados,valor_depreciado,ValorAtual);
 
    return 0;
}
