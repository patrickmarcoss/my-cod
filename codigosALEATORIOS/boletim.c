#include "stdio.h"

int main(){
	system("color 7c");
    double notas[10][3];
    int valores;
    	puts("DIGITE AS NOTAS: ");
    for(valores=0; valores<10; valores++){
        scanf("%lf", &notas[valores][0]);
        scanf("%lf", &notas[valores][1]);
        notas[valores][2]=(notas[valores][0]+notas[valores][1])/2;
    }
    printf("Nota1\t\tNota2\t\tMedia\n");
    for(valores=0; valores<10; valores++){
        printf("%.2f\t\t%.2f\t\t%.2f\n", notas[valores][0], notas[valores][1], notas[valores][2]);
    }

    return 0;
}
