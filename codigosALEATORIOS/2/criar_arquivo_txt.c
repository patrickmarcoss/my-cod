#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {system("color 7c");

FILE *arq;
char palavra[20];//para escrever no txt
//W - reescreve no txt
//A - modo escrita no final
//t - modo texto
//b - modo binario

arq = fopen("C:\\Users\\dinib\\Desktop\\atividades\\ativi6\\dados.txt","r+b");
				
if (arq == NULL)
{
    puts("O arquivo nao foi aberto!\n");
}
else
   {
     puts("O arquivo foi aberto!\n");
   }
   	 puts("Escreva algo no arquivo:\n");
  		scanf("%s", palavra);//essa linha é necessaria para a linha 27.
	 puts("\nPressione uma tecla para finalizar...");
  	 //fprintf(arq, \n"%s", palavra);
  	fprintf(arq,"[%s]", palavra);
  	 
getchar();

fclose(arq);


exit (1);
}

