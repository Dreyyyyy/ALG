/*
10)
[Algoritmos -A. I. Orth] O departamento  que  controla  o  índice  de poluição  do  meio ambiente fiscaliza 3 grupos de indústrias que são altamente poluidoras do meio ambiente. 
O índice de poluição aceitável varia de 0.05 até 0.25. Se o índice sobe para 0.3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades; se o índice sobe para 0.4, as do 1º e do 2º grupos são intimadas a suspenderem suas atividades; e se o índice sobe para 0.5,todos os três grupos devem ser notificados a paralisarem suas atividades. Escreva um programa que lê o índice de poluição medido e emite a notificação adequada aos diferentes grupos de empresas. 
*/

#include <stdio.h>

int main()
{
	
	float poluicao;
	
	printf("Digite o nível de poluição médio:");
	scanf("%f",&poluicao);
	
	if(poluicao>=0.00 && poluicao<=0.25)
	{
		printf("O índice de poluição está aceitável e não necessita-se de uma paralização.");	
	}
	else
	{
		if(poluicao>=0.30 && poluicao<=0.39)
		{
		printf("O primeiro grupo de empresas deve suspender suas atividades.");
		}
		if(poluicao>=0.40 && poluicao<=0.49)
		{
		printf("Os grupos de empresas 1 e 2 devem suspender suas atividades.");
		}
		if(poluicao>=0.50)
		{
		printf("Todos os grupos de empresas devem suspender suas atividades.");
		}
	}
	
	return 0;
	
}
