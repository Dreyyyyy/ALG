/*
2) Achar a somatória de cada uma das linhas de uma matriz A (7x5). Para praticar utilize
somente a estrutura de repetição while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,j=0,matrizA[7][5],soma=0;
	printf("Dada a matriz 7x5:\n\n");
	while(i<7)
	{
		j=0;
		while(j<5)
		{
			matrizA[i][j]=(rand()%35);
			printf("M[%d][%d]=%d\n",i+1,j+1,matrizA[i][j]);
			soma+=matrizA[i][j];
			j++;
		}
		printf("O somatório da linha %d é %d.\n\n",i+1,soma);
		i++;		
	}
	return 0;
}
