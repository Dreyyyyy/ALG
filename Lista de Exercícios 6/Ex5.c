/*
5) A conversão de graus Farenheit para centígrados é obtida porC=5/9(F−32)
Fazer  um  programa  que  calcule  e  escreva  uma  tabela  de  centígrados  em  função  de  graus 
Farenheit, que variam de 50 a 150 de 1 em 1.
*/

#include <stdio.h>

int main()
{

	int F=50;
	float C;
	
	do
	{
	
		C=(float)5/(float)9*((float)F-(float)32);
		printf("%.2f graus centígrados equivalem à %d Farenheit.\n",C,F);
		F++;
	
	}while(F<=150);	
	
	return 0;
	
}
