#include <stdlib.h>
#include <stdio.h>

int converte_hhmmss_em_segundos(int h, int m, int s){
    int result;

    result = h*3600 + m*60 + s;

    return(result);
}

int main(int argc, char const *argv[]){system("color 7c");
    int result;
    int horas, minutos, segundos;

    printf("Escreva um valor para hora:\n");
    scanf("%i", &horas);

    printf("Escreva um valor para minuto: \n");
    scanf("%i", &minutos);   

    printf("Escreva um valor para segundos: \n");
    scanf("%i", &segundos);

    result = converte_hhmmss_em_segundos(horas, minutos, segundos);
    
    puts("===================================================");
    printf("\nTIME %i:%i:%i \n\nConvertido para segundos fica: %i segundos\n", horas, minutos, segundos ,result);

    return EXIT_SUCCESS;
}
