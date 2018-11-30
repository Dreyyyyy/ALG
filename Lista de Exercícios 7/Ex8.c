/*
8) Fazer um algoritmo para calcular a média entre N números lidos. Construa um algoritmo 
para calcular as raízes de uma equação do 2º grau (Ax2 + Bx + C), sendo que os valores de A, 
B e C são fornecidos pelo usuário.
*/

#include <stdio.h>

void media(float num,int nNum)
{
	float mediaN;
	mediaN=num/(float)nNum;
	printf("A média de %.2f, se o número de algarismos informados for de %d será de %.2f.\n",num,nNum,mediaN);
}

int main()
{
	float num=0.0,numAux;
	int opcao=1,nNum=0;
	printf("Este algorítmo calcula a média entre N números lidos.\n");
	while(opcao==1)
	{
		printf("Digite um número qualquer: ");
		scanf("%f",&numAux);
		num+=numAux;
		nNum++;
		printf("Deseja continuar a adicionar números? se sim, digite 1, caso não, digite 0: ");
		scanf("%d",&opcao);
		while(opcao>1||opcao<0)
		{
			printf("Opção inválida! Digite 1 para sim, e 0 para não: ");
			scanf("%d",&opcao);
		}
	}
	media(num,nNum);	
	return 0;
}
