  
#include <stdio.h>

int main() {
	system("color fC");
    int funcionario[][0]={{1111,30001000},{2222,30002000},{3333,30003000},{4444,30004000},{5555,30005000},{6666,30006000},{7777,30007000}};
    //só aparece algo se colocar o [0], se colocar por exemplo o [0][10] e [0][1] nao aparece nada.
    int matricula, a;
    scanf("%d", &matricula);
    for(a=0; a<7; a++) {
        if (matricula==funcionario[a][0]){
            printf("%d\n", funcionario[a][1]);
            break;
        }
    }

    return 0;
}
