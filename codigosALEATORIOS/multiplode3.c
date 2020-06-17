#include <stdio.h>

int main () {
	system("color fC");
    int mult;
    for(mult=1; mult<100; mult++){
        if (mult%3==0){
            printf ("%d\n", -mult);
        }
    }
    
    return 0;
}
