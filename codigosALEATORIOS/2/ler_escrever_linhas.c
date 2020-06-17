#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){system("color 7c");
FILE *arq;
int i=0;
char nome[30];
char matricula[10];
arq= fopen("C:\\Users\\dinib\\Desktop\\atividades\\ativi7\\texto.txt", "w");
if (arq == NULL)
{	
    fprintf(stderr, "Erro ao abrir o aluno.txt!");	return 1; 
}
else
   {
     puts("O arquivo foi aberto!\n");
   }   

puts("Escreva sua matricula:");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);

while (strcmp("0", matricula)){
    fputs(matricula, arq);

    puts("Escreva seu nome:");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);
    fputs(nome, arq);

    puts("Escreva sua matricula:");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);   
}
fclose(arq);
arq=fopen("C:\\Users\\dinib\\Desktop\\atividades\\ativi7\\texto.txt","r");
while(fgets(matricula,10,arq)!=NULL){
    printf("%s", matricula); 
}

return 0;

}
