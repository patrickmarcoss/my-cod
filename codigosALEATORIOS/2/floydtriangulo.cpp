#include <stdio.h>

int main()
{system("color 7c");
	int n, i,  c, a = 1;
	
	printf("Escreva um numero para se obter o triangulo\n");
	scanf("%d", &n);
	printf("Floyd's triangle\n");
	for (i = 1; i <= n; i++)
	{
		for (c = 1; c <= i; c++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	
	return 0;
}


