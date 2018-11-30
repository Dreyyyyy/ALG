/*
6) Escrever um algoritmo que lê um valor X e calcula e escreve os 20 primeiros termos da série:
Onde: 1 + 1/X²+ 1/X³+ 1/X⁴+ ...
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int x,cont=1;
	double potencia,divisao,resultado=0.0;
	
	printf("Digite um valor x para ser inserido em seu somatório: ");//2
	scanf("%d",&x);
	
	while(cont<=20)//1<=20,
	{
		potencia=pow(x,cont);//2¹
		divisao=1/potencia;
		resultado+=divisao;
		
		printf("O somatório do x escolhido é de 1/%.0lf\n",potencia);
		cont++;
	}
	
	printf("O resultado do somatório acima, em forma decimal será de %.2f.\n",resultado);
	
	return 0;
	
}


