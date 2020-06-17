#include "stdio.h"
#include "stdlib.h"

int main(){system("color 7c");
FILE *arq;
int i=0;
//int j=0;
char matricula[10]= {'\0'};
char nome[30]= {'\0'};

(arq = (fopen("C:\\Users\\dinib\\Desktop\\atividades\\ativi7\\aluno.txt", "w")));

if (arq == NULL)
{	
    fprintf(stderr, "Erro ao abrir o aluno.txt!");	return 1; 
    //stderr	Erro padrão
	//stdin		Entrada padrão
	//stdout	Saída padrão
}
else
   {
     puts("O arquivo foi aberto!\n");
   }   
puts("Escreva seu nome:\0 ");
	scanf("%s",nome);
fprintf(arq,"[%s]", nome);
	gets(nome);
puts("Escreva sua matricula: ");
    scanf("%s",matricula);
fprintf(arq,"[%s]", matricula);
	gets(matricula);
//com gets nao haverá lixo
    
while(matricula[0]!='\0'){	       
	for(i = 0;i <= 10;i++){
		fputc(matricula[i],arq);
}    
	for(i = 0;i<= 30;i++){
		fputc(nome[i],arq);

}
while(matricula[i]!='\0'){
fputc(matricula[i], arq);
}

fclose(arq);

return 1;
}}
