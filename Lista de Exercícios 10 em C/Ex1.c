/*
1) Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal secundária em
um vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,matriz[5][5],dSecund[5];
	printf("Dada a matriz quadrada 5x5:\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			matriz[i][j]=(rand()%25);
			printf("M[%d][%d]=%d\n",i+1,j+1,matriz[i][j]);
		}
	}
	printf("\n\nA sua diagonal secundária será:\n\n");
	j=4;
	for(i=0;i<5;i++)
	{
		dSecund[i]=matriz[i][j];
		j--;
		printf("Termo %d da diagonal secundária: %d\n",i+1,dSecund[i]);
	}
	return 0;
}












