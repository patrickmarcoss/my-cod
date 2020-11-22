/*Implemente o algoritmo SelectionSort e:

a) mostre na tela o tempo gasto para ordenar um vetor de tamanho 150.000 totalmente embaralhado;

b) mostre o tempo gasto para ordenar o mesmo vetor com apenas 10 números fora da ordem.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SelectionSort(long int *vet, long int tam);
long int * embaralha(long int *vet, long int tam);
long int * cria_vetor(long int qtd);
void mostrar_vetor(long int *vet, long int tam);
void arruma_vetor(long int * vet ,long  int tam);


int main(int argc, char *argv[])
{
    long int  * vet1, * vet2;
    clock_t t1, t2;
    srand(time(NULL));
    vet1 = cria_vetor(150000);
    embaralha(vet1, 150000);
    mostrar_vetor(vet1, 20);
    t2 = clock();
        SelectionSort(vet1, 150000);
        t2=clock() - t2;
    printf("\nTempo para ordenar o vetor de >150000<: -> %lf\n", (((double)t2)/CLOCKS_PER_SEC));

    vet2 = cria_vetor(10);
    embaralha(vet2, 10);
    mostrar_vetor(vet2, 10);
    t1 = clock();
        SelectionSort(vet2,10);
        t1 = clock() - t1;
    printf("\nTempo para ordenar vetor de [10]: -> %lf\n", (((double)t1)/CLOCKS_PER_SEC));
    
    return 0;
}

void mostrar_vetor(long int *vet, long int tam)
{
    long int i;
    printf("\n");
    for (i = 0; i < tam; i++)
    {
        printf("[%ld]- ", vet[i]);
    }
}

void SelectionSort(long int *vet, long int tam)
{
    int i, j, menor, aux;
    
    for(i=0;i<tam-1;i++)
    {
        menor = i;
        for(j=i+1;j<tam;j++)
        {
            if (vet[j] < vet[menor])
            {
                menor = j;
            }
        }
        aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;
    }
    return;
}

long int * embaralha(long int *vet, long int tam)
{
    long int ind_aux, aux;
    long int i;
    for (i = 0; i < tam; i++)
    {
        ind_aux = rand() % tam;

        aux = vet[i];
        vet[i] = vet[ind_aux];
        vet[ind_aux] = aux;
    }
}

long int * cria_vetor(long int qtd)
{
    long int * vetor;
    long int i;
    long int i_aux, aux;
    vetor = (long int*)malloc(sizeof(long int)*qtd);

    for(i=0;i<qtd;i++)
    {
        vetor[i] = i+1;
    }
    return vetor;
}