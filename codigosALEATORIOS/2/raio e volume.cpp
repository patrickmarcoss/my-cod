#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
	
	float esf(float v)
	{
	float r;

 	r=(4*3.14*v*v*v)/3;

 	return r;
	}

int main()
	{	
  	float r,result;

  	cout<<"Digite o valor do raio:";
  	scanf("%f",&r);

  	result=esf(r);

  	printf("o volume e:%.2f",result);

  	getch();
  
	}
