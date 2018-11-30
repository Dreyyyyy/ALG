/*
9) Escreva uma função que recebe um vetor, seu tamanho e um número X. Mostre a posição 
de cada elemento igual a X deste vetor.
*/

#include <stdio.h>

void comparaVetor(int *vetor,int x,int tamanho);

int main()
{
	int i,x,tamanho;
	printf("Digite o tamanho do vetor que deseja informar: ");
	scanf("%d",&tamanho);
	int vetor[tamanho];
	for(i=0;i<tamanho;i++)
	{
		printf("Informe o %dº termo do vetor: ",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("Digite um número x: ");
	scanf("%d",&x);
	comparaVetor(vetor,x,tamanho);
	return 0;
}

void comparaVetor(int *vetor,int x,int tamanho)
{
	int i,pos;
	for(i=0;i<tamanho;i++)
	{
		if(vetor[i]==x)
		{
			pos=i;
			printf("O elemento do vetor na posição %d é igual ao x(%d) informado.\n",pos,x);
		}
	}
}
