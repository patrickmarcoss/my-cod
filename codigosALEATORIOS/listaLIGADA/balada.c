#include <stdio.h>
#include <stdlib.h>

typedef struct P
{
	int quant;
	struct registro *inicio;
} P;

typedef struct registro
{
	int valor;
	struct registro *prox;
} registro;
/* ----------------------=-=-=-=-=-==-=-=-=-=-=-=-==- */
/* ----------------------=-=-=-=-=-==-=-=-=-=-=-=-==- */
void mostrar(P *pilha)
{
	registro *aux;
	if (pilha->inicio == NULL)
	{
		return;
	}
	else
	{
		aux = pilha->inicio;
		pilha->inicio = aux->prox;
		printf("\n|%d|\n", aux->valor);
		pilha->quant=-1;
	}
}

void SelectionSort( int *vet, int tam)
{
    int alfa, beta, menor, help;
    
    for(alfa=0;alfa<tam-1;alfa++)
    {
        menor = alfa;
        for(beta=alfa+1;beta<tam;beta++)
        {
            if (vet[beta] > vet[menor])
            {
                menor = beta;
            }
        }
        help = vet[alfa];
        vet[alfa] = vet[menor];
        vet[menor] = help;
    }
    return;
}

void inserir(P *pilha, int valor)
{
	registro *novo, *aux;
	novo = (registro *)malloc(sizeof(registro));
	novo->valor = valor;

	if (pilha->inicio == NULL)
	{
		pilha->inicio = novo;
	}
	else
	{
		aux = pilha->inicio;
		novo->prox = aux;
		pilha->inicio = novo;
		pilha->quant+=1;
	}
}

int main()
{
	int *vet;
	int n, i;
	P *pilha;

	scanf("%d", &n);

	vet = (int *)malloc(sizeof(int) * n);
	pilha = (P *)malloc(sizeof(P));
	
	pilha->inicio = NULL;
	pilha->quant = 0;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &vet[i]);
	}

    SelectionSort(vet, n);

	for (i = 0; i < n; i++)
	{
		inserir(pilha, vet[i]);
		mostrar(pilha);
	}
	return 0; 
}

/* Entrada
10
1 2 6 3 4 5 10 7 8 9

Saída
10
9
8
7
6
5
4
3
2
1 */