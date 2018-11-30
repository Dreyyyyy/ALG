/*
9) Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 3 centímetros por ano.  
Construa um programa que calcule e imprima quantos anos serão necessários para que Ciclano seja maior que Fulano.
*/

#include <stdio.h>

int main()
{

	float Fulano=1.50,Ciclano=1.10;
	int anos=0.0;
	
	do
	{
	
		Fulano+=0.02;
		Ciclano+=0.03;
		anos++;	

	}while(Fulano>Ciclano);
	
	printf("Ciclano levará %d anos para passar em altura o Fulano.\n",anos);
	
	return 0;
	
}
