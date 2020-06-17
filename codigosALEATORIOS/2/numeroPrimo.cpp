#include <stdio.h> 
int main() {
	int n, i, gf=0;

	printf("Escreva um numero inteiro: ");
	scanf("%d",&n); 

	for(i=2;i<=n/2;++i) { 
		if(n%i==0) { 
			gf=1; break; 
		} 
	} 

	if (gf==0)
		printf("%d e um numero primo.",n);
	else 
		printf("%d nao e um numero primo.",n);
	return 0;
}
