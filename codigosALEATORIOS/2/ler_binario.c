#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;

    struct {
      int matricula;
      char nome[30];
    } aluno;

    memset(&aluno, 0, sizeof(aluno));

    printf("Entre com a matricula: ");
    scanf("%d", &aluno.matricula);

    getchar();

    printf("Entre com o nome: ");
    scanf("%[^\n]s", aluno.nome);
    // scanf("%s", &aluno.nome[0]);

    arquivo = fopen("alunos.dat", "w+b");

    if (arquivo == NULL) {
        printf("erro ao cria arquivo\n");
    }
    
    fwrite(&aluno, sizeof(aluno), 1, arquivo);

    fclose(arquivo);


    arquivo = fopen("alunos.dat", "rb");

    memset(&aluno, 0, sizeof(aluno));

    fread(&aluno, sizeof(aluno), 1, arquivo);

    printf("%d - %s", aluno.matricula, aluno.nome);

    return 0;
}
