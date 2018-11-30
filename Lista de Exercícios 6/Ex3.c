/*
3) Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
S= 1000/1 –997/2 + 994/3 -991/4 ...
*/

#include <stdio.h>

int main()
{

	float numerador=1000,denominador=1,div,soma=0.0;
	
	do
	{
		div=numerador/denominador;//1000/1,-997/2
		soma+=div;//685.296936
		numerador=(numerador-3)*(-1);//-997,994
		denominador++;//2,3		
	}while(denominador<=50);//2<=50
	
	printf("A soma do somatório acima será de %f.\n",soma);
	
	return 0;
	
}






