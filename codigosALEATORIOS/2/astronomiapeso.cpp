#include <stdio.h>
#include <stdlib.h>

main(){
	  float peso, resultado; 
	  int escolha;
	
	  printf("Digite seu peso e em seguida escolha um dos planetas pra saber sua massa la: \n");
	  scanf("%f",&peso);
	  system("cls");
	  printf("Escolha alguma dos planetas: \n0.37 -1- Mercurio \n0.88 -2- Venus \n0.38 -3- Marte \n2.64 -4- Jupiter \n1.15 -5- Saturno \n1.17 -6- Urano\n");
      scanf("%i",&escolha);
      switch (escolha){
      	case 1:
   		resultado = peso*0.37;
		printf("Sua Massa %.2f",resultado);
		break;
		case 2:
		resultado = peso*0.88;
		printf("Sua Massa %.2f",resultado);
		break;
		case 3:
		resultado = peso*0.38;
		printf("Sua Massa %.2f",resultado);
		break;
		case 4:
		resultado = peso*2.64;
		printf("Sua Massa %.2f",resultado);
		break;
		case 5:
		resultado = peso*1.15;
		printf("Sua Massa %.2f",resultado);
		break;
		case 6:
		resultado = peso*1.17;
		printf("Sua Massa %.2f",resultado);
		break; 
		default :
    printf ("Valor Inserido invalido!\n");     		
      	system("pause");
	  }
}
