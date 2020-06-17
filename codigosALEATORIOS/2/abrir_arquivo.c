#include <stdio.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL) {
        printf("Arquivo nao encontrado!");
        return 1;
    }
    
    //posicionando no FIM do arquivo
    fseek(arquivo, 0, SEEK_END);
    while(!feof(arquivo)) {
        printf("%c", fgetc(arquivo));
    }
    
    //posicionando no INICIO do arquivo
    fseek(arquivo, 0, SEEK_SET);
    while(!feof(arquivo)) {
        printf("%c", fgetc(arquivo));
    }

    fclose(arquivo);

    return 0;
}
