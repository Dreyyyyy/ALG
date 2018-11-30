/*
5)Desenvolver um programa para determinar o valor de S, pela seguinte série:
Onde: S = 1/1 +2/4 + 3/9 +4/16 + 5/25 +6/36 ... +10/100
numerador=1,2,3,4,5,6...10
denominador=1,4,9,16,25,36...100
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	float numerador=0,denominador=0,resultado=0.0,resultadoAux=0.0;
	
	while(numerador<10)//0<=5,1<=5,2<=5,3<=5,4<=5,
	{
		numerador++;//1,2,3,4,5
		denominador=numerador*numerador;//1*1=1,2*2=4,3*3=9,4*4=16,5*5=25
		resultadoAux=numerador/denominador;//1/1=1,2/4=1.5,3/9=0.33,4/16=0.25,5/25=
		resultado+=resultadoAux;//0+1=1+1.5+0.33+0.25+0.2
	}
	
	printf("O resultado do somatório é de %f.\n",resultado);
	
	return 0;
		
}
