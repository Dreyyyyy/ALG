/*
4) Faça um programa que calcule e escreva o valor de S:
S= 1/1 -3/2 + 5/3 -7/4 + ... -99/50
numerador=1-3+5-7+...-99
denominador=1+2+3+4+...+50
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int 
	float denominador=1,numerador=0,resultado=0.0,resultadoAuxp=0.0,resultadoAuxi=0.0,resultadop=0.0,resultadoi=0.0;
	
	while(denominador<=50)//1,2
	{
		if(denominador%2)==0)
		{
			numerador+=1;//1
			denominador++;//1
			resultadoAuxp+=numerador/denominador;
			resultadop+=resultadoAuxp;
		}
		else
		{
			numerador+=2*(-1);
			denominador++;
			resultadoAux+=numerador/denominador;
			resultadoi+=resultadoAuxi;+
		}

	}
	
	resultado=resulto

	printf("O valor do somatório é de %.2f\n",resultado);
	
	return 0;
	
}
