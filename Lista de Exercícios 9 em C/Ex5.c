/*
5) Dado um conjunto N contendo 15 valores positivos, separar os elementos pares dos
impares, usando apenas um vetor extra. Observação: Existiam elementos pares e impares no
conjunto.
*/

#include <stdio.h>

int main()
{
	int i,vetorN[15],vetorI[15];
	for(i=0;i<15;i++)
	{
		printf("Digite o %dº elemento para ser alocado no vetor N: ",i+1);
		scanf("%d",&vetorN[i]);
	}
	for(i=0;i<15;i++)
	{	
		if(vetorN[i]%2!=0)
		{
			vetorI[i]=vetorN[i];
			printf("Índice do vetor com nºs ímpares [%d]=%d.\n",i,vetorI[i]);
		}
		else
		{
			printf("Índice do vetor com nºs pares [%d]=%d.\n",i,vetorN[i]);
		}
	}	
	return 0;
}
