#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;
main(){
	//Saber quantos metros cúbicos de cimento e areia são necessários para colocar
	//um piso de porcelanato em uma área.
 float larg,  comp,  res, soma;
 int ps, ps2;
	cout<<"Escolha uma opcao:";
 	printf("\n1- para calcular piso: ");
 		scanf("%d", &ps);
switch (ps){
 case 1: printf("\n PISO ");
 	printf("\n largura: ");
 		scanf("%f",&larg);
 	printf("\n Comprimento: ");
 		scanf("%f", &comp);
 	printf("\n Total: %.2f Metros", larg * comp);
	 break;

system("color 18");

default: printf("\n\n\n Numero invalido!");

}
getchar();
}
