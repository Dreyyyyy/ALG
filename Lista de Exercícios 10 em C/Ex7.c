/*---Descrição do algorítmo---
7) Escrever um programa que lê uma matriz M[5,5] e cria 2 vetores SL[5], SC[5] que 
contenham respectivamente as somas das linhas e das colunas de M. 
Escrever a matriz e os vetores criados.*/
//---

//---Bibliotecas---
#include <stdio.h>
//---

//---Função main---
int main()
{
	int i,j,M[5][5],SL[5]={},SC[5]={};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Informe o termo da %dº linha e %dº coluna: ",i+1,j+1);
			scanf("%d",&M[i][j]);
			SL[i]+=M[i][j];
		}
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			SC[j]+=M[i][j];
		}
	}
	printf("A matriz:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d ",M[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<5;i++)
			printf("SL[%d]=%d\n",i+1,SL[i]);
	for(j=0;j<5;j++)
			printf("SC[%d]=%d\n",j+1,SC[j]);
	return 0;
}
//---
