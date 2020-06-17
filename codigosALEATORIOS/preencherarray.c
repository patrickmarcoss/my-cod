#include <stdio.h>

int main(){
	system("color fC");
    int a[10];
    int b;
    puts("Escreva 10 numeros: ");
    for(b=0; b<10; b++) {
        scanf("%d", &a[b]);
    }  
    puts("Os numeros lidos foram: ");
    for(b=0; b<10; b++) {
        printf("%d\n" , a[b]);
    }

    return 0;
}
