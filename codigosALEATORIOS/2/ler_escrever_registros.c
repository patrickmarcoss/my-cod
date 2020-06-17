#include <stdio.h>
#include <stdlib.h>

int main(){system("color 7c");

FILE *arq;
int i;
char nome[30], 
matricula[10];

arq = fopen("C:\\Users\\dinib\\Desktop\\atividades\\ativi8\\aluno.dat","w");
	if (arq == NULL)
{	
    fprintf(stderr, "Erro ao abrir o aluno.txt!");	return 1; 
    	//stderr	Erro padrão
		//stdin		Entrada padrão
		//stdout	Saída padrão
}
else{
     puts("O arquivo foi aberto!\n");
   }   
puts("Escreva sua matricula:\n-");
   	memset(matricula, '\0', sizeof(matricula));
  	scanf("%s",matricula);
  
   	for(i=0;i<10;i++){
    fwrite(matricula,1,sizeof(matricula) , arq);
  }
while(strcmp("0", matricula)){

    puts("Escreva seu nome:\n-");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);
    fwrite(nome,1,sizeof(nome) , arq);

puts("Digite a matricula\n");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",&matricula);
    fwrite(matricula,1,sizeof(matricula) , arq);
}
fclose(arq);
return 0;
}
