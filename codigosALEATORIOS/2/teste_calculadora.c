# include <stdio.h>
# include "calculadora.h"
int main(){
	int x = 10;
	int y = 2;
		
	int som = somar(x,y);
	printf("%d",&som);
	int sub = subtrair(x,y);
	printf("%d",&sub);
	int mut = multiplicar(x,y);
	printf("%d",&mut);
	int div = dividir(x,y);
	printf("%d",&div);

return 0;
}
