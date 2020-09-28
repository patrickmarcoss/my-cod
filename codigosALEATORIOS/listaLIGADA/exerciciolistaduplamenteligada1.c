/*
Construa um programa que insira números em uma lista duplamente ligada.
O usuário poderá escolher se deseja incluir o número no ínício da lista ou no final da lista;
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{

    int qtd;
    struct registro *inicio;
    struct registro *fim;

}lista;

typedef struct registro{

    int valor;
    struct registro *prox;
    struct registro *ant;
}registro;

//Coloca aqui encima todas as funções para o programa conseguir ver que elas existem.

lista *aloca_lista();
registro *aloca_registro();
void incluir_no_final(lista *l, int x);
void incluir_comeco(lista *l, int x);
void mostrar_lista(lista *l, int opcao);
void menu(lista *l);


int main(){
    lista * l1;
    l1 = aloca_lista();
    menu(l1);
    puts("\n");
    return 0;
}

lista *aloca_lista()
{
    lista *novo;
    novo = (lista *)malloc(sizeof(lista));
    novo->qtd = 0;
    novo->inicio = NULL;
    novo->fim = NULL;
    return novo;
}

registro *aloca_registro()
{
    registro *novo;
    novo = (registro *)malloc(sizeof(registro));
    novo->valor = 0;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

void incluir_no_final(lista *l, int x)
{
    registro *aux;
    registro *novo;

    novo = aloca_registro();
    novo->valor = x;

    if (l->qtd == 0)
    {
        l->inicio = novo;
        l->fim = novo;
    }
    else
    {
        aux = l->fim;
        aux->prox = novo;
        novo->ant = aux;
        l->fim = novo;
    }
    l->qtd++;
}

void incluir_comeco(lista *l, int x)
{
    registro *aux, *novo;
    novo = aloca_registro();
    novo->valor = x;

    if (l->qtd == 0)
    {
        l->inicio = novo;
        l->fim = novo;
    }
    else
    {
        aux = l->inicio;
        aux->ant = novo;
        novo->prox = aux;
        l->inicio = novo;
    }

    l->qtd++;
}

void mostrar_lista(lista *l, int opcao)
{
    registro *aux;

    if (l == NULL)
    {
        puts("\n primeiro parametro invalido");
        return;
    }
    if (opcao != 1 && opcao != 2)
    {
        puts("\n segundo parametro invalido");
        return;
    }

    if (l->qtd == 0)
    {
        puts("\n Lista esta vazia, preencha ela antes!");
    }
    else
    {

        if (opcao == 1)
        {
            aux = l->inicio;
        }
        else
        {
            aux = l->fim;
        }

        while (aux != NULL)
        {
            printf("\n %d", aux->valor);
            if (opcao == 1)
            {
                aux = aux->prox;
            }
            else
            {
                aux = aux->ant;
            }
        }
    }
}

void menu(lista *l)
{
    int opcao;
    int num, retorno;
    registro *aux;

    do
    {
        printf("\n |1| - incluir no comeco");
        printf("\n |2| - incluir no final");
        printf("\n |3| - mostrar");
        printf("\n |4| - sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            puts("\n Deseja incluir qual numero no comeco?");
            scanf("%d", &num);
            incluir_comeco(l, num);

            break;
        case 2:
            puts("\n Deseja incluir qual numero no final?");
            scanf("%d", &num);
            incluir_no_final(l, num);

            break;
        case 3:
            puts("\nMostrar lista indo #opcao(1)\nMostrar lista vindo #opcao(2)");
            scanf("%d", &num);
            mostrar_lista(l, num);
            
            break;
        case 4:
            printf("\nSaindo do Programa, até algum dia guerreiro\n");

            break;
        default:
            puts("\n Opcao invalida");
            break;
        }
    } while (opcao != 4);
}