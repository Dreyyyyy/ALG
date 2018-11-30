/*---Descrição do Algoritmo---
5) Escreva um programa que lê uma matriz M[5,5] e calcula as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secundária;
e) de todos os elementos da matriz;
Escreva estas somas e a matriz.
*/

//---Bibliotecas---
#include <stdio.h>
//---

//---Protótipos de módulos---
int somai4(int m[][3]);
int somaj2(int m[][3]);
int somaDp(int m[][3]);
int somaDs(int m[][3]);
int somaAll(int m[][3]);
//---

//---Função main---
int main()
{
	int m[3][3],i,j,si4,sj2,sdp,sds,sall;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite o %dº termo da %dº linha de sua matriz: ",j+1,i+1);
			scanf("%d",&m[i][j]);
		}
	}
	si4=somai4(m);
	sj2=somaj2(m);
	sdp=somaDp(m);
	sds=somaDs(m);
	sall=somaAll(m);
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",m[i][j]);
		}
		printf("\n");
	}
	printf("A seguir as somas pedidas da matriz acima:\n");
	printf("Soma da linha 4: %d\n",si4);
	printf("Soma da coluna 2: %d\n",sj2);
	printf("Soma da diagonal principal: %d\n",sdp);
	printf("Soma da diagonal secundária: %d\n",sds);
	printf("Soma da matriz ao todo: %d\n",sall);
	return 0;
}
//---

//---Módulos---
int somai4(int m[][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i=4)
				soma+=m[i][j];
		}
	}
	return soma;
}
int somaj2(int m[][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j=2)
				soma+=m[i][j];
		}
	}
	return soma;
}
int somaDp(int m[][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				soma+=m[i][j];
		}
	}
	return soma;
}
int somaDs(int m[][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)
	{
		for(j=3;j<0;j--)
		{
				soma+=m[i][j];
		}
	}
	return soma;
}
int somaAll(int m[][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				soma+=m[i][j];
		}
	}
	return soma;
}
//---
