#include <stdio.h>
#include <stdlib.h>

int is_bissexto(int a){

    int resultado;

    if((a%4==0 && a%100!=0) || (a%400==0)){
        resultado = 1;
    }
    else{
        resultado = 0;
    }

    return(resultado);
}

int main(int argc, char const *argv[]){system("color 7c");

    int ano, result;


    printf("Escreva o ano para saber se e bissexto ou nao: \n");
    scanf("%d", &ano);

    result = is_bissexto(ano);
    if(result==1){
        printf("\n%d E ano bissexto! \n", ano);
    }
    else{
        printf("\n%d Nao e bissexto!! \n", ano);
    }

    return EXIT_SUCCESS;
}
