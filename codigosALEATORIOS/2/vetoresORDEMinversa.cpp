#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
 int i, v[10];
 //elementos
 for(i=0;i<9;i++){
 	printf("Elemento[%d]= ",i);
 		scanf("%d",&v[i]);
 }
 //VALORES ORIGINAIS
 	cout<<"\nValores originais \n";
 		for(i=0;i<9;i++)
 	printf("%d\n",v[i]);
 //VALORES NA ORDEM INVERSA
 	cout<<"\n Valores na ordem inversa \n";
 		for(i=8;i>=0;i--)
 	printf("%d\n",v[i]);
 return 0;
}

