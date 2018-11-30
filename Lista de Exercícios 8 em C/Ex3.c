/*
3) Juca da Silva comprou um saco de ração com peso em quilos. Juca possui dois gatos para 
os quais fornece a quantidade de ração em gramas. Faça um programa que receba o peso do 
saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto 
restará de ração no saco após cinco dias. 
*/

#include <stdio.h>

float conversao(float sacoRacao)
{
	return sacoRacao*1000;
}

float restoRacao(float gato1,float gato2,float sacoRacao)
{
	return (conversao(sacoRacao)-(gato1+gato2)*5)/1000;
}

int main()
{
	float sacoRacao,gato1,gato2;
	printf("Digite a quantidade em Kg do saco de ração: ");
	scanf("%f",&sacoRacao);
	printf("Digite o quanto de ração em gramas foi dado para cada gato em um dia, separando por espaços: ");
	scanf("%f%f",&gato1,&gato2);
	printf("Após 5 dias restará %.2f Kg de ração.\n",restoRacao(gato1,gato2,sacoRacao));
	return 0;
}
