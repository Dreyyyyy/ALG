/*
1)Faça um programa em C que escreve os números múltiplos de 7 entre 100 e 200, bem como a 
soma destes números.
*/

#include <stdio.h>

int main()
{

	int cont=100,soma=0,div7;
	
	do
	{
		if(cont%7==0)
		{
			printf("%d é múltiplo de 7.\n",cont);
			soma+=cont;
		}

	cont++;	
	}while(cont<200);
	printf("%d é a soma dos múltiplos de 7 entre 100 e 200.\n",soma);
	
	return 0;
	
}
