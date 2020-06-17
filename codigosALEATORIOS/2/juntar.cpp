#include<stdio.h>
#include<conio.h>


 
#define TAM 2 //define constante

 
int main() {
    int vet1[TAM], vet2[TAM], vet3[TAM*2], i;
   
 
    //lEscreva um programa para ler um vetor Y (inteiro), de tamanho N (N<=20), determinar e
	//imprimir o maior e o menor elemento deste vetor.
	printf("Digite os 4 vetores: ");
    for (i = 0;i<TAM; i++) {
        scanf("%i",&vet1[i]);
    }
 
    //ler valores para o segundo vetor
    for (i = 0;i<TAM;i++) {
        scanf("%i",&vet2[i]);
    }
 
    //preencher o terceiro vetor
    for (i = 0;i<TAM;i++) {
        vet3[i*2] = vet1[i];
    }
    for (i = 0;i<TAM;i++) {
        vet3[i*2+1]=vet2[i];
    }
 
    //mostra valores para o segundo vetor
    printf("Vetor 1: ");
    for (i = 0;i<TAM;i++) {
        printf("%i",vet1[i]);
    }
    printf("\n");
 
    //mostra valores para o segundo vetor
    printf("Vetor 2: ");
    for (i = 0;i<TAM;i++) {
        printf("%i",vet2[i]);
    }
    printf("\n");
 
    //mostra valores para o terceiro vetor
    printf("Vetor 3: ");
    for (i = 0;i<TAM*2;i++) {
        printf("%i",vet3[i]);
    }
 
    return 0;
}
