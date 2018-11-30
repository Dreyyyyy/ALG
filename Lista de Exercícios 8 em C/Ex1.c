/*
1) Escreva um programa que leia três números inteiros e positivos (A,B,C) e calcule a seguinte expressão: 
D=(R+S)/2. Onde:R=(A + B)2 e S=(B + C)2
OBS: Para o calculo de R e S utilize funções especificas que retornam os valores ao 
procedimento chamador.
*/

#include <stdio.h>
#include <math.h>

int R(int numA,int numB)
{
	return pow(numA+numB,2);
}

int S(int numB,int numC)
{
	return pow(numB+numC,2);
}


int main()
{
	int numA,numB,numC;
	float calc;
	printf("Digite sequencialmente e separado por espaços 3 números inteiros e positivos: ");
	scanf("%d%d%d",&numA,&numB,&numC);
	calc=(R(numA,numB)+S(numB,numC))/2;
	printf("O resultado da expressão (R+S)/2, onde R=(num1+num2)² e S=(num2+num3)² é de %.2f.\n",calc);
	return 0;
}
