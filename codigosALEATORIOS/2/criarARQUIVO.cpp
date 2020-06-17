#include <stdio.h>
 
 int main()
 {
    FILE *fp;
    fp = fopen ("README", "w");
    if (fp == NULL) {
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }
    printf ("Arquivo README criado com sucesso.\n");
    fclose (fp);
    return 0;
 }
