/*
Construa um programa que receba N números do usuário e insira esses números de forma ordenada em uma lista duplamente ligada
Não é permitido a utilização de vetores;
O programa deverá ler números do usuário até que seja digitado o número -1
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int qtd;
    struct registro * inicio;
    struct registro * fim;
}lista;

typedef struct registro
{
    int valor;
    struct registro * ant;
    struct registro * prox;
}registro;

lista * aloca_lista();
registro * aloca_registro();
void incluir_no_inicio(lista *l, int num);
void mostrar_do_inicio(lista *l);

int main(){
    lista * l1;
    int opcao = -1, num;
    l1 = aloca_lista();

    do
    {
        puts(" (1) - Adicionar numero na lista");
        puts(" (2) - Mostrar lista");
        puts(" (3) - Para sair\n ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            puts("Qual numero voce quer adicionar na lista ? ");
            scanf("%d", &num);
            incluir_no_inicio(l1, num);
            break;
            
        case 2:
            puts("lista: ");
            mostrar_do_inicio(l1);
        
        case 3:
            
            puts("\nSaindo do Programa, até algum dia guerreiro\n");

            break;

        default:
            break;
        }
        
    } while (opcao != 3);

    printf("\n");

    return 0;
}

lista * aloca_lista(){
    lista * nova_lista;
    nova_lista = (lista *)malloc(sizeof(lista));
    nova_lista->qtd = 0;
    nova_lista->inicio = NULL;
    nova_lista->fim = NULL;
    return nova_lista;
}

registro * aloca_registro(){
    registro * novo_registro;
    novo_registro = (registro *)malloc(sizeof(registro));
    novo_registro->valor = 0;
    novo_registro->ant = NULL;
    novo_registro->prox = NULL;
    return novo_registro;
}

void incluir_no_inicio(lista *l, int num)
{
  int i=0;
  registro *novo, *aux, *ant;

  novo = (registro *)malloc(sizeof(registro));
  novo->valor = num;

  if(l->inicio == NULL)
  {
    l->inicio = novo;
  }
  else
  {
    aux = l->inicio;

    if(novo->valor < aux->valor)
    {
      novo->prox = aux;
      l->inicio = novo;
    }
    else
    {
      while(novo->valor > aux->valor)
      {
        if(aux->prox == NULL)
        {
          aux->prox = novo;
          l->qtd++;
          return;
        }
        else
        {
          ant = aux;
          aux = aux->prox;
        }
      }
      novo->prox = aux;
      ant->prox = novo;
    }
  }

  l->qtd++;
}

void mostrar_do_inicio(lista *l){
    registro * aux;

    if (l->inicio == NULL && l->fim == NULL)
    {
        printf("\n Lista vazia, preencha ela antes\n");
    }
    else
    {
        aux = l->inicio;
        while (aux != NULL)
        {
            printf("\n |%d|", aux->valor);
            aux = aux->prox;
        }
    }
    }
