/*
3) Encontrar o maior elemento e a sua respectiva posição de uma matriz B de dimensão 7x5.
*/

#include <stdio.h>
#include <stdlib.h>

void maiorE(int matrizB[][5]);

int main()
{
	int i,j,matrizB[7][5];
	printf("Dada a matriz B de dimensão 7x5:\n\n");
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			matrizB[i][j]=(rand()%35);
			printf("B[%d][%d]=%d\n",i+1,j+1,matrizB[i][j]);	
		}
	}
	maiorE(matrizB);
	return 0;
}

void maiorE(int matrizB[][5])
{
	int i,j,elemento=0,mI,mJ;
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			if(matrizB[i][j]>=elemento)
				elemento=matrizB[i][j];
				mI=i;
				mJ=j;
		}
	}
	printf("\nO maior elemento será o %d, que está na linha %d coluna %d.\n",elemento,mI+1,mJ);
}
