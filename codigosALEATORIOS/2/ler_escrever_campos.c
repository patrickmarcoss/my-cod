#include <string.h>

void main()
{
    FILE *arq;
    char matricula[10];
    char nome[30];
    char caracter;

    arq = fopen("alunos.txt", "w+");

    if (arq == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        return;
    }

    memset(matricula, sizeof(matricula), 0);
    printf("matricula = ");
    scanf("%s", matricula);
    getchar();

    while (strcmp(matricula, "0"))
    {
        memset(nome, sizeof(nome), 0);
        printf("nome = ");
        scanf("%s", nome);
        getchar();

        fprintf(arq, "%10s\t%30s\n", matricula, nome);
        
        memset(matricula, sizeof(matricula), 0);
        printf("matricula = ");
        scanf("%s", matricula);
        getchar();
    }

    fclose(arq);

    arq = fopen("alunos.txt", "r");

    fseek(arq, SEEK_SET, 0);

    caracter = fgetc(arq);

    while (!feof(arq))
    {
        printf("%c", caracter);
        caracter = fgetc(arq);
    }

    fclose(arq);

    return;
}
