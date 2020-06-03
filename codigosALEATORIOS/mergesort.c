#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LIMITE = 5;

typedef struct
{
    char matricula[10];
    char nome[30];
} aluno;

void ordena(aluno *p)
{
    for (int i = 0; i < LIMITE; i++)
    {
        for (int j = i; j < LIMITE; j++)
        {
            if (atoi(p[i].matricula) > atoi(p[j].matricula))
            {
                aluno aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}

int main()
{
    FILE *f1, *f2, *f3;
    int i = 0, j = 0, k = 0;
    char filename[10];

    aluno a1, a2, a3[LIMITE];

    f1 = fopen("alunos.dat", "rb");

    if (f1 == NULL)
    {
        printf("erro ao cria arquivo\n");
        return 1;
    }

    memset(&a1, 0, sizeof(aluno));
    // fread(&a1, sizeof(aluno), 1, f1);
    fread(a3, sizeof(aluno), LIMITE, f1);

    while (!feof(f1))
    {
        // a3[i++] = a1;

        // if (i == LIMITE)
        // {
            ordena(a3);
            sprintf(filename, "temp%d.dat", k++);
            f2 = fopen(filename, "wb");
            fwrite(a3, sizeof(aluno), LIMITE, f2);
            // for (int l = 0; l < i; l++)
            // {
            //     fwrite(&a3[l], sizeof(aluno), 1, f2);
            // }
            fclose(f2);
        //     i = 0;
        // }

        memset(&a1, 0, sizeof(aluno));
        fread(a3, sizeof(aluno), LIMITE, f1);
    }

    fclose(f1);

    // if (i > 0)
    // {
        ordena(a3);
        sprintf(filename, "temp%d.dat", k++);
        f2 = fopen(filename, "wb");
        fwrite(a3, sizeof(aluno), LIMITE, f2);
        // for (int l = 0; l < i; l++)
        // {
        //     fwrite(&a3[l], sizeof(aluno), 1, f2);
        // }
        fclose(f2);
    // }

    f1 = fopen("temp0.dat", "rb");
    f2 = fopen("temp1.dat", "rb");
    f3 = fopen("intercala.dat", "wb");

    fread(&a1, sizeof(aluno), 1, f1);
    fread(&a2, sizeof(aluno), 1, f2);
    while (!feof(f1) || !feof(f2))
    {
        if (feof(f1) || atoi(a1.matricula) >= atoi(a2.matricula))
        {
            fwrite(&a2, sizeof(aluno), 1, f3);
            fread(&a2, sizeof(aluno), 1, f2);
        }

        if (feof(f2) || atoi(a1.matricula) < atoi(a2.matricula))
        {
            fwrite(&a1, sizeof(aluno), 1, f3);
            fread(&a1, sizeof(aluno), 1, f1);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

  f1 = fopen("intercala.dat", "rb");

  memset(&a1, 0, sizeof(aluno));
  fread(&a1, sizeof(aluno), 1, f1);

  while (!feof(f1))
  {
    printf("%10s - %-30s\n", a1.matricula, a1.nome);

    memset(&a1, 0, sizeof(aluno));
    fread(&a1, sizeof(aluno), 1, f1);
  }

  fclose(f1);
    return 0;
}
