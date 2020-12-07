#include <stdlib.h>
#include <stdio.h>

void bubblesort(int *vet, int tam){
    int vezes, i, aux;
    int trocou = 1, troca = 0;

    for (vezes = 0; vezes < tam-1 && trocou == 1; vezes++)
    {
        for (i = 0; i < tam - 1 - vezes; i++)
        {
            trocou = 0;
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                trocou = 1;
                troca+=1;
            }
        }
    }
    printf("[%d]\n", troca);
}

int main()
{
    int viagens, qtdViagens,num, j, i;
    scanf("%d", &viagens);

    for (i = 0; i < viagens; i++)
    {
        scanf("%d", &qtdViagens);
        int vagoes[qtdViagens];
        
        for (j=0; j < qtdViagens; j+=1)
        {
            scanf("%d", &num);
            vagoes[j] = num;
        }
        bubblesort(vagoes, qtdViagens);//calc
    }
    return 0;
}

/* Entrada
2
6
10 7 8 9 1 5
4
1 2 3 4
Saída
11
0 */