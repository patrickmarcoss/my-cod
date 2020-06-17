#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char caracter;
    const int MAX = 128;
    char linha[MAX];
    int matricula;
    char nome[31];
    
    arquivo = fopen("alunos.txt", "rw+");

    for (int i = 0; i < 10; i++)
    {
        // fputc('C', arquivo);
        // fputs("uma linha \n", arquivo);
        fprintf(arquivo, "%d %s\n", i, "meu nome");
    }

    fseek(arquivo, 0, SEEK_SET);

    // fgets(linha, MAX, arquivo);
    // caracter = fgetc(arquivo);
    fscanf(arquivo, "%d %[^\n]s", &matricula, nome);

    while (!feof(arquivo))
    {
        printf("%d - %s\n", matricula, nome);
        fscanf(arquivo, "%d %[^\n]s", &matricula, nome);
        // fgets(linha, MAX, arquivo);
        // caracter = fgetc(arquivo);
    }

    fclose(arquivo);

    return 0;
}
