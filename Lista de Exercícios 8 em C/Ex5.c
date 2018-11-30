/*
5) Sabe-se que:
1.1 pé = 12 polegadas;
2.1 jarda = 3 pés;
1 = 3
2 = x
1x=6
x=6/1=6
3.1 milha = 1.760 jardas.
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados em:
a) polegadas;
b) jardas;
c) milhas.
Para cada conversão faça sua respectiva função.
*/

#include <stdio.h>

float polegadas(float pes)
{
	return pes*12;
}

float jardas(float pes)
{
	return pes/3;
} 

float milhas(float pes)
{
	return jardas(pes)/1760;
}

int main()
{
	float pes;
	printf("Digite um valor em pés para conversão: ");
	scanf("%f",&pes);
	printf("O valor convertido de pés para polegadas é de: %f.\n",polegadas(pes));
	printf("O valor convertido de pés para jardas é de: %f.\n",jardas(pes));
	printf("O valor convertido de pés para milhas é de: %f.\n",milhas(pes));
	return 0;
}
