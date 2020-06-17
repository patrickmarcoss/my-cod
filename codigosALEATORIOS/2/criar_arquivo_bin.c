#include <stdio.h>

int main(){system("color 7c");

FILE *arq;

arq = fopen("C:\\Users\\dinib\\Desktop\\atividades\\ativi6\\arquivoBIN.bin","rb");

if (arq == NULL)
{
    puts("O arquivo nao foi aberto!\n");
    return 1;
}
else
   {
     puts("O arquivo foi criado e aberto!\n");
   }
puts("Enter 2 vezes para sair");
getchar();

fclose(arq);

return 1;
}
