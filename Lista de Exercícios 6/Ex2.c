/*
2) Escreva um programa que calcule e escreva a soma dos dez primeiros termos da seguinte 
série:
2/500 -5/450 + 2/400 -5/350 + ...
*/

#include <stdio.h>

int main()
{

	int cont=1;
	float numerador=2,denominador=500,soma=0.0,div;
	
	do
	{
		div=numerador/denominador;//2/500,-5/500,
		soma+=div;//
		denominador-=50;//450,400
		numerador=(numerador+3)*(-1);//-5,2
		cont++;//2,3
	}while(cont<=10);//2<=10,3<=10
	
	printf("A soma dos 10 primeiros termos do somatório é de %f.\n",soma);
	
	return 0;
	
}
