/*
1) Tendo como dados de entrada a altura e o sexo de uma pessoa (1-masculino e 0 -feminino), construa um programa que calcule seu peso ideal, utilizando as seguintes 
fórmulas: -para homens: (72.7*h)-58-para mulheres: (62.1*h)-44.7.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int sexo;
	float alt,pesoi;
	printf("Informe seu sexo. Digite 1 para masculino e 2 para feminino:\n");
	scanf("%d",&sexo);
	printf("Digite sua altura:\n");
	scanf("%f",&alt);
	
	if(sexo==1)
	{
		pesoi=(72.7*alt)-58;
		printf("Seu peso ideal é de %.2f\n",pesoi);
	}
	if(sexo==0)
	{
		pesoi=(62.1*alt)-44.7;
		printf("Seu peso ideal é de %.2f\n",pesoi);
	}
	
	return 0;
	
}

