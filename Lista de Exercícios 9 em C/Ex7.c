/*
7) Faça um programa que leia e armazene 5 valores inteiros em um vetor Vet1. Leia outros 5
valores inteiros e armazene num vetor Vet2. A partir destes valores lidos, mostre na tela:
1. a soma dos elementos de cada vetor, nas respectivas posições;
2. a diferença dos elementos de cada vetor, nas respectivas posições;
3. o produto dos elementos de cada vetor, nas respectivas posições;
4. a divisão entre os elementos de cada vetor, nas respectivas posições (verificar divisão
por 0).
*/

#include <stdio.h>

void soma(int *vet1,int *vet2);
void diferenca(int *vet1,int *vet2);
void produto(int *vet1,int *vet2);
void divisao(int *vet1,int *vet2);

int main()
{
	int i,vet1[5],vet2[5];
	printf("Este algorítmo calcula diversas operações aritméticas entre vetores.\n");
	for(i=0;i<5;i++)
	{
		printf("Digite o %dº valor inteiro para o vetor 1: ",i+1);
		scanf("%d",&vet1[i]);
		printf("Digite o %dº valor inteiro para o vetor 2: ",i+1);
		scanf("%d",&vet2[i]);
	}
	soma(vet1,vet2);
	diferenca(vet1,vet2);
	produto(vet1,vet2);
	divisao(vet1,vet2);
}

void soma(int *vet1,int *vet2)
{
	int i,soma;
	for(i=0;i<5;i++)
	{
		soma=vet1[i]+vet2[i];
		printf("A soma dos vetores 1 e 2 no índice %d é: %d.\n",i,soma);
	}
}

void diferenca(int *vet1,int *vet2)
{
	int i,dif;
	for(i=0;i<5;i++)
	{
		dif=vet1[i]-vet2[i];
		printf("A diferença dos vetores 1 e 2 no índice %d é: %d.\n",i,dif);
	}
}

void produto(int *vet1,int *vet2)
{
	int i,prod;
	for(i=0;i<5;i++)
	{
		prod=vet1[i]*vet2[i];
		printf("O produto dos vetores 1 e 2 no índice %d é: %d.\n",i,prod);
	}
}

void divisao(int *vet1,int *vet2)
{
	int i;
	float divi;
	for(i=0;i<5;i++)
	{
		divi=(float)vet1[i]/(float)vet2[i];
		printf("A divisão dos vetores 1 e 2 no índice %d é: %.2f.\n",i,divi);
	}
}
