#include <stdio.h>
#include <string.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
	/*
programa que pede um numero(esse numero sera a quantidade de nomes que será possivel 
digitar, quando digitar o numero o programa irá colocar os nomes em ordem alfabetica.
*/
//EDINILSON PEREIRA DE SOUSA EnGComP
	system("color fC");
	char nome[10][8], tnome[10][8], t[8];
	int i, j, n;
	printf("ESCREVA UM NUMERO(ATE 10):\n");
	scanf("%d", &n);
	printf("Escreva %d nomes:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", nome[i]);
		strcpy(tnome[i], nome[i]);
	}
	for (i = 0; i < n - 1 ; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(nome[i], nome[j]) > 0)
			{ 
				strcpy(t, nome[i]);
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], t); 
			}
		}
	}
	printf("=-=-=-=-=-=-==---=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\nEsses sao\nos nomes \t Nomes\n\t\t em ordem\n\t\t alfabetica\n");
	printf("=-=-=-=-=-=-==---=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\t\t%s\n", tnome[i], nome[i]);
	}
	printf("------------------------------------------\n");
	getch();
}
