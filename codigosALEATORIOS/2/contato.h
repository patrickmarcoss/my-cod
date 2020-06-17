#ifndef CONTATO_H
#define CONTATO_H

typedef struct {
    char nome[60];
    int telefone;
} contato;

contato* criar_contato(char *nome, int telefone);

#endif
