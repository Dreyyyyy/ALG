/*
4) Escreva um programa que leia três números inteiros e positivos (A,B,C) 
e calcule a seguinte expressão: 
D=(R+S)/2. Onde:R=(A+B)² e S=(B+C)²
*/

#include <stdio.h>
#include <math.h>

void D(int A,int B,int C)
{
	int calcR;
	calcR=pow(A+B,2);
	int calcS;
	calcS=pow(B+C,2);
	int calcTotal;
	calcTotal=(calcR+calcS)/2;
	printf("O resultado da expressão será de %d.\n",calcTotal);
}

int main()
{
	int A,B,C;
	printf("Dada a expressão: D=(R+S)/2. Onde:R=(A+B)² e S=(B+C)².\n"); 
	printf("Digite 3 números inteiros e positivos para que cada um deles sejam atribuidos, sequencialmente, para as variáveis A,B e C: ");
	scanf("%d%d%d",&A,&B,&C);
	D(A,B,C);
	return 0;
}
