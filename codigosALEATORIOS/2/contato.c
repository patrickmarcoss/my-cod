#include <stdlib.h>
#include "contato.h"

contato* criar_contato(char *nome, int telefone) {
    contato *ponteiro = (contato*)malloc(sizeof(contato));
    strcpy(nome, ponteiro->nome);
    ponteiro->telefone = telefone;
    return ponteiro;
}

void adicionar_contato(contato *ponteiro, contato **lista) {
    if (lista == NULL) {
        lista = (contato**)malloc(sizeof(contato*));
    } else {
        lista = (contato**)realloc(sizeof(contato*)+1);
    }

    int tamanho = sizeof(lista)/sizeof(contato*); // tamanho da lista

    lista[tamanho-1] = ponteiro;    
}

contato* buscar(char *nome, contato** lista) {
   int tamanho = sizeof(lista)/sizeof(contato*); // tamanho da lista
   for(int i; i < tamanho; i++) {
       contato *ponteiro = lista[i];
       if (strcmp(ponteiro->nome, nome) == 0) {
           return ponteiro;
       }
   }

   return NULL;
}

void listar(contato** lista) {
   int tamanho = sizeof(lista)/sizeof(contato*); // tamanho da lista
   for(int i; i < tamanho; i++) {
       contato *ponteiro = lista[i];
       printf("{%s, %d}\n", ponteiro->nome, ponteiro->telefone);
   }
}
