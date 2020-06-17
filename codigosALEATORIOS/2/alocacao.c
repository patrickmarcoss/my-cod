#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ptr;

int main()
{
    printf("%p\n", ptr);

    // ptr = (char *)malloc(10*sizeof(char));
    ptr = (char *)calloc(10, sizeof(char));

    printf("%p\n", ptr);

    strcpy(ptr, "Ola");

    printf("Valor do ponteiro: %s\n", ptr);

    ptr = (char *)realloc(ptr, 10*sizeof(char));

    printf("%p\n", ptr);

    free(ptr);

    printf("%p\n", ptr);

    printf("Valor do ponteiro: %s\n", ptr);

    ptr = NULL;

    printf("%p\n", ptr);

    printf("Valor do ponteiro: %s\n", ptr);

    return 0;
}
