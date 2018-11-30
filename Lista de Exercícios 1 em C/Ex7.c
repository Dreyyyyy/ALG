/*
7.Sabe-se  que,para  iluminar  de  maneira  correta  os  cômodos  de  uma  casa,  para 
cada m2 deve-se usar 18W de potência. Faça um programa que recebe as duas 
dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e 
a potência de iluminação que deverá ser usada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int m2p=18,comp,larg,area,pilum;
	printf("Informe a comprimento de um cômodo em metros:");
	scanf("%d",&comp);
	printf("Informe a largura de um cômodo em metros:");
	scanf("%d",&larg);
	area=larg*comp;
	pilum=area*m2p;
	printf("A área de seu cômodo é de %d e a potência de iluminação necessária será de %d.",area,pilum);
	
	return 0;
	}
