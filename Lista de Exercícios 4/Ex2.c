//2)Escreva um programa que realize o calculo do fatorial de um numero qualquer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int num,numAux;
	
	printf("Digite um número inteiro qualquer para o cálculo de seu fatorial: ");
	scanf("%d",&num);//5
	numAux=num;//5
	num--;//4
	
	while(num>=1)//4>=1,3>=1,2>=1,1>=1,0>=1(Implicação falsa, portanto o laço termina aqui.)
	{
		numAux*=num;//5*4=20,20*3=60,60*2=120,120*1=120
		num--;//3,2,1,0
	}
	printf("O fatorial será de %d.\n",numAux);
	
	return 0;
		
}
