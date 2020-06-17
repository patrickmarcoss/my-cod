#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float nome;
	char cpf[12];
	float salario=0, porcentagem=0, aumento=0, salariofinal=0;
	
	printf("Digite o nome do funcionario: \n");
	scanf("%s",&nome);
	printf("Digite o cpf do funcionario: \n");
	scanf("%i",&cpf);
	printf("Digite o salario do funcionario: \n");
	scanf("%f",&salario);
	printf("Digite a porcentagem do aumento: \n");
	scanf("%i",&porcentagem);
	
	aumento = salario * (porcentagem / 100);
	salariofinal = salario + aumento;
	printf("Aumento =  R$ %.2f \n",aumento);
	printf("Novo Salario = R$ %.02f \n",salariofinal);
	return 0;
	
}
