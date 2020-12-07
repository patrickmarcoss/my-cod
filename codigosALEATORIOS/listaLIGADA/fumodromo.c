#include <stdio.h>
#include <stdlib.h>

typedef struct FILA
{
    int qtd;
    struct registro *fim;
    struct registro *comeco;
} FILA;

typedef struct registro
{
    int num;
    struct registro *prox;

} registro;

FILA *aloca_FILA();
registro *aloca_registro();

void chama(FILA *f, int x)
{
    registro *novo, *aux;
    novo = aloca_registro();
    novo->num = x;

    if (f->comeco==NULL && f->fim==NULL) 
    {
        f->comeco = novo;
        f->fim = novo;
    }
    else
    {
        aux=f->fim;
        aux->prox= novo;
        f->fim = novo;
    }
        ++f->qtd;
}
void mostratemp(FILA *f)
{
    int del;
    registro *aux = NULL;
	aux=f->comeco;
	if(aux->prox==NULL)
	{
		puts("");
	}
	else
	{
		del=aux->num;
	}
	aux=aux->prox;
	f->comeco=aux;
}

int ordem(FILA *f)
{
    int valor=0;
    FILA *time = aloca_FILA();
    while (f->comeco != NULL)
    {
        //exemplo algo+=1; outro algo+= alguma coisa;
        valor+=f->comeco->num;
        mostratemp(f);
    }
    if(time->comeco != NULL)
    {
        chama(f, time->comeco->num);
        mostratemp(time);
    }
    return valor;
    }

int main(){
    int i, j;
    scanf("%d", &j);
    FILA *fumod;
    
    int T[j];
    fumod = aloca_FILA();
    for ( i = 0; i < j; i++)
    {
        scanf("%d", &T[i]);
        chama(fumod, T[i]);
    }
    printf("|%d|", ordem(fumod));
    puts("\n");
}

FILA *aloca_FILA()
{
    FILA *novo;
    novo = (FILA *)malloc(sizeof(FILA));
    novo->comeco = NULL;
    novo->fim = NULL;
    novo->qtd = 0; 
    return novo;
}

registro *aloca_registro()
{
    registro *novo;
    novo = (registro *)malloc(sizeof(registro));
    novo->prox = NULL;
    novo->num = 0;
    return novo;
}

/* 
Entrada
5
2
2
2
2
4
Saída
12
Entrada
3
1
2
3
Saída
6 */