/*
1) Encontrar o maior elemento e a sua respectiva posição de um vetor A com 15 elementos
*/

#include <stdio.h>

int maiorElemento(int *vetorA);

int posicao(int *vetorA);

int main ()
{
	int i,vetorA[15],vetorAux;
	for(i=0;i<15;i++)
	{
		printf("Digite o %dº a ser atribuido ao vetor A: ",i+1);
		scanf("%d",&vetorA[i]);
	}
	maiorElemento(vetorA);
	printf("O maior elemento será %d, e sua respectiva posição no vetor é %d.\n",maiorElemento(vetorA),posicao(vetorA));
	return 0;
}

int maiorElemento(int *vetorA)
{
	int maiorE,i;
	for(i=0;i<15;i++)
	{
		if(vetorA[i]>=maiorE)
		{
			maiorE=vetorA[i];
		}
	}
	return maiorE;
}

int posicao(int *vetorA)
{
	int maiorE,i,pos;
	for(i=0;i<15;i++)
	{
		if(vetorA[i]>=maiorE)
		{
			maiorE=vetorA[i];
			pos=i;
		}
	}
	return pos;
}
