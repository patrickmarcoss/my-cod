#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
	float real=0, dolar=3.40,resultado=0, val=0;
	int a=0;
	char ch;
		cout<<"Digite 1 para converter real para dolar ou Digite 0 para converter para real: \n ";
		scanf("%d",&a);
		cout<<"Digite o valor: ";
		scanf("%f",&val);												
		switch(a){
			case 0:	{			
			 	resultado=val*dolar;
				printf("multiplicacao: %.2f\n",resultado);
				break;}
			case 1:{
				resultado=val/dolar;
				printf("divisao: %.2f\n",resultado);		
				break;}		
			default: 
				printf("Opcao Negado");}
		system("pause");
		
		return 0;
}
		
			
	
	
	

