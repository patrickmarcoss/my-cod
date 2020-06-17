#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color fC");
    int a, b;
    int Numeros[10];
    for (a = 0;a<10;a++)
    {
    puts("Digite um numero: ");
    scanf("%d", &Numeros[a]);
    puts("\n");
    
    //flush descarrega os buffers de saída de um fluxo de dados.
    //stdin fluxo de entrada.
    }
    for (b = 9; b >= 0; b--)
    {
        printf("%d\n", Numeros[b]);
	//PARA LER NA ORDEM INVERSA
    }
    return 0;
}
