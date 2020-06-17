#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
	char v[100];
	
	printf("Escrava uma string para reverter:\n");
	gets(v);
	
	strrev(v);
	
	printf("O reverso da sequência inserida e: \n%s\n",v);
	
	return 0;
}
