/*
6.Escreva um programa que calcule o consumo de combustível de um automóvel 
em Km/L, e o informe na tela.
Dados:
KI = Quilometragem inicial
KF = Quilometragem final
CC = Consumo de combustível (nº de litros)
DP = Distância percorrida 
DP =  KF-KI
GC = Gasto de combustível
GC = DP / CC
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int KI,KF,CC,DP,GC;
	printf("Infome a quilometragem inicial:");
	scanf("%d",&KI);
	printf("Informe a quilometragem final:");
	scanf("%d",&KF);
	printf("Informe o consumo de combustível em litros:");
	scanf("%d",&CC);
	DP=KF-KI;
	GC=DP/CC;
	printf("O consumo de combustível em Km/l é de %d.",GC);
	
	return 0;
	}
