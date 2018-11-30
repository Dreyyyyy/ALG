/*
2.O  galão  imperial  (abreviação:  gal)  é  uma  unidade  de  medida  de  volume  de 
líquidos, utilizada no Reino Unido. Sabendo que 1gal equivale a 4,54609 litros, 
faça  um  programa  que  converta  uma  determinada  quantidade  de  galões 
imperiais em litros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float gal=4.54609,galimp;
	int qtd;
	printf("Informe a quantidade de galões que deseja converter:");
	scanf("%d",&qtd);
	galimp=gal*qtd;
	printf("%d galões equivalem a %f litros.",qtd,galimp);
	
	return 0;
	}


