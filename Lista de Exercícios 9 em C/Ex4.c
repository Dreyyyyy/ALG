/*
4) Dado um vetor N contendo 15 valores positivos digitados por você, separe num vetor P os
valores pares e num vetor I os valores impares. Depois mostre somente os valores pares e
impares em seus respectivos vetores. Utilize procedimento.
*/

#include <stdio.h>

void parimpar(int *vetorN);

int main()
{
	int vetorN[15]={91,52,63,44,25,96,87,18,29,70,61,42,55,14,34};
	parimpar(vetorN);
	return 0;
}

void parimpar(int *vetorN)
{
	int i,vetorP[]={},vetorI[]={};
	for(i=0;i<15;i++)
	{
		if(vetorN[i]%2==0)
		{
			vetorP[i]=vetorN[i];
			printf("VetorP[%d]=%d(número par).\n",i,vetorP[i]);
		}
		else
		{
			vetorI[i]=vetorN[i];
			printf("VetorI[%d]=%d(número ímpar).\n",i,vetorI[i]);
		}
	}
}
