# include "stdio.h"
#include "stdlib.h"

int maior (int a,int b){
	return a > b;
}
int menor (int a,int b){
	return a < b;
}
 void ordena (int *ptr, int (*funcao)(int a, int b)) {
 	int i,j;
 	for (i = 0;i<10;i++) {//criar 2 laços para i e j.
 	for ( j=i;j<10;j++){
 	if((*funcao)(ptr[i],ptr[j])){
 		int x = ptr[i];
 		ptr[i] = ptr[j];
 		ptr[j] = x;//ponteiros que puxam outros 
}}}}

 void imprimir (int*v){
	int i;
	for(i=0;i<10;i++){
		printf("%i,",v[i]);
	}}

 int main() {system("color 7c");
 	int vetor[]={5, 6, 9, 8, 2, 1, 3, 7, 0, 4};
 	puts("Menor para o maior(esquerda para direita):");
 	ordena(vetor, maior);
 	imprimir(vetor);
 	
 	puts("\n\n=====================\n");
 	
 	puts("Maior para o menor(esquerda para direita):");
 	ordena(vetor, menor);
 	imprimir(vetor);
 	
return (0);
 }
