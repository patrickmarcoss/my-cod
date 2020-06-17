#include<stdio.h>
#include<string.h>

 typedef struct funcionario_t
 {
 	char nome[50];
 	double salario;
 	char admissao[10];
 };
 void main()
 {
 	int total = 0;
 	struct funcionario_t funcionario[100];
 	struct funcionario_t funcionario;
 	
 	scanf("%s", funcionario.nome);
 	while (!strcmp(funcionario.nome))
 	{
 		scanf("%lf", &funcionario.salario);
 		scanf("%s", &funcionario.admissao);
 		
 		funcionarios[total++] = funcionario;
 		
 		scanf("%s", funcionario.nome);
 		
	 }
	 
	 for (int i = 0; i < total; i++)
	 {
	 	printf("%s, %.2lf, %s\n", funcionario.nome, funcionario.salario, funcionario.admissao);
	 }
	 
	 }
	 
 }
