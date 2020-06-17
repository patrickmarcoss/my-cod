#include <stdio.h>
#include <math.h>
#include<iostream>
#include<ctype.h>

using namespace std;
int main(){		
	//Saber quantos metros cúbicos de cimento e areia são necessários para colocar
	//um piso de porcelanato em uma área.
 float larg,  comp,  res, soma;
 int ps, ps2;
	cout<<"Escolha a opcao:";
 	printf("\n1- para calcular piso: ");
 		scanf("%d", &ps);
 	
switch (ps){
 case 1: printf("\n PISO DE PORCELANATO: ");
 	printf("\n largura: ");
 		scanf("%f",&larg);
 	printf("\n Comprimento: ");
 		scanf("%f", &comp);
 	printf("\n Total: %.2f Metros", larg * comp);
	 break;

default: printf("\n\n\n Numero invalido!");

}
getchar();
{
	int i,j,x,z;
	char ch='*';
	cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\n\nImprime um quadrado em CARACTER de *\n";
	cout<<"De o numero de linhas do seu quadrado:\n";
		scanf("%i", &x);
	cout<<"De o numero de colunas do quadrado:\n";
		scanf("%i", &z);
			for(i = 0;i < x;i++)
			{
				for(j=1;j<=z;j++)
				{
					printf("%c", ch);
					}
						printf("\n");
						}	
							}
		
}

