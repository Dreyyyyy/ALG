/*
2) Dado o vetor F com 20 elementos inteiros, substituir cada elementos por ele mesmo
multiplicado pela posição do elemento no conjunto, para i = 0,1, 2,... 19.
*/

#include <stdio.h>

void multiplicaE(int *vetorF);

int main()
{
	int i,vetorF[20];
	for(i=0;i<20;i++)
	{
		printf("Digite o %dº elemento para ser adicionado ao vetor de índice 20: ",i+1);
		scanf("%d",&vetorF[i]);
	}
	multiplicaE(vetorF);
	return 0;
}

void multiplicaE(int *vetorF)
{
	int i,nVetor;
	for(i=0;i<20;i++)
	{
		nVetor=vetorF[i]*i;
		printf("Vetor F[%d]=%d\n",i,nVetor);
	}
}
