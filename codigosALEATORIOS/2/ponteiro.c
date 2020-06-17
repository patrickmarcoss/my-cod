#include <stdio.h>

struct aluno_t {
    int matricula;
    char nome[50];
} aluno;

int main()
{
    struct aluno_t *ptr;

    aluno.matricula = 0;
    ptr = &aluno;
    ptr->matricula = 0;
     
    int *p;
    int x = 10;
    p = &x;

    printf("%d\n", *p);
    printf("%p\n", p);

    p++;

    printf("%d\n", *p);
    printf("%p\n", p);

    char *s = "Eu adoro programar em C";

    printf("%p\n", s);

    int i = 0;
    while(s[i] != 0) {
        printf("%c", s[i]);
        i++;
    }

    printf("\n");

    while(*s != 0) {
        printf("%c", *s);
        s++;
    }
    
    return 0;
}
