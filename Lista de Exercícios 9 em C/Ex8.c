/*
8) Dado 3 conjuntos de números, de tamanho N, calcular a média de cada um dos conjuntos.
*/

#include <stdio.h>

int media(int *conj,int iN);

int main()
{
	int i1,i2,i3,i;
	printf("Digite quantos algarismos você deseja colocar em seu 1º conjunto númérico: ");
	scanf("%d",&i1);
	int conj1[i1];
	for(i=0;i<i1;i++)
	{
		printf("Digite o %dº algarismo de seu 1º conjunto: ",i+1);
		scanf("%d",&conj1[i]);
	}
	media(conj1,i1);
	printf("Digite quantos algarismos você deseja colocar em seu 2º conjunto númérico: ");
	scanf("%d",&i2);
	int conj2[i2];
	for(i=0;i<i2;i++)
	{
		printf("Digite o %dº algarismo de seu 2º conjunto: ",i+1);
		scanf("%d",&conj2[i]);
	}
	media(conj2,i2);
	printf("Digite quantos algarismos você deseja colocar em seu 3º conjunto númérico: ");
	scanf("%d",&i3);
	int conj3[i3];
	for(i=0;i<i3;i++)
	{
		printf("Digite o %dº algarismo de seu 3º conjunto: ",i+1);
		scanf("%d",&conj3[i]);
	}
	media(conj3,i3);
	printf("A média do 1º conjunto será de %d.\n",media(conj1,i1));
	printf("A média do 2º conjunto será de %d.\n",media(conj2,i2));
	printf("A média do 3º conjunto será de %d.\n",media(conj3,i3));
	return 0;
}

int media(int *conj,int iN)
{
	int i,conjSom=0,m;
	for(i=0;i<iN;i++)
	{
		conjSom+=conj[i];
	}
	m=conjSom/iN;
	return m;
}
