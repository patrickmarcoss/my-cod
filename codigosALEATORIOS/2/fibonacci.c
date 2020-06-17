#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n){
    int result;

    if(n>2){
        result=(fibonacci(n-1) + fibonacci(n-2));
    }
    else{
        result=1;
    }

    return(result);
}

int main(int argc, char const *argv[]){system("color 7c");
    int n, p, result=0;

    printf("Escreva um numero para n:\n");
    scanf("%d", &n);
    printf("\n");

    for(p=1;p<n+1;p++){
        printf("%d | %d\n",p, result);
        result = fibonacci(p);
    }
    printf("\n");
    
    return EXIT_SUCCESS;
}

