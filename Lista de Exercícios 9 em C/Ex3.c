/*
3) Escreva a função que recebe 2 parâmetros: o primeiro parâmetro é um vetor de inteiros e o
segundo parâmetro é um numero. A função deve retornar como resultado o segundo parâmetro
assim como o número de vezes que ele ocorre dentro do vetor. 
*/

#include <stdio.h>

int verificaVetor(int *vetor,int num,int indice);

int main()
{
	int indice,i,num;
	printf("Digite o número de índices que deseja para seu vetor: ");
	scanf("%d",&indice);
	int vetor[indice];
	for(i=0;i<indice;i++)
	{
	printf("Agora, digite o %dº elemento para ser alocado ao seu vetor: ",i+1);
	scanf("%d",&vetor[i]);
	}
	printf("Digite agora um número inteiro qualquer: ");
	scanf("%d",&num);
	verificaVetor(vetor,num,indice);
	printf("O número %d, que é o segundo parâmetro aparece %d vez(es) dentro do vetor.\n",num,verificaVetor(vetor,num,indice));
	return 0;
}

int verificaVetor(int *vetor,int num,int indice)
{
	int i,numVezes=0;
	for(i=0;i<indice;i++)
	{
		if(vetor[i]==num)
		{
			numVezes++;
		}
	}
	return numVezes;
}


