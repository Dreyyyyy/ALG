/*---Descrição do algorítmo---
4) Dada uma matriz quadrada verificar se ela é simétrica.
*/

//---Bibliotecas---
#include <stdio.h>
//---

//---Protótipos de módulos---
int simetrica(int t,int mA[t][t]);
//---

//---Função main---
int main()
{
	int t,i,j,res;
	printf("Informe qual será o tamanho de sua matriz quadrada: ");
	scanf("%d",&t);
	int mA[t][t];
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("Informe o %dº termo da %dº linha de sua matriz: ",j+1,i+1);
			scanf("%d",&mA[i][j]);
		}
	}
	res=simetrica(t,mA);
	if(res==1)
		printf("A matriz não é simétrica!\n");
	else
		printf("A matriz é simétrica!\n");	
	return 0;
}
//---

//---Módulos---
int simetrica(int t,int mA[t][t])
{
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(mA[i][j]!=mA[j][i])
				return 1;	
		}
	}
	return 0;
}
//---


