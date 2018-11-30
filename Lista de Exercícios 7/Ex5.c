/*
5)Passando como parâmetros o primeiro termo e a razão de uma progressão aritmética, 
determinar por meio de um procedimento a soma dos seus primeiros cinco termos.
*/

#include <stdio.h>

void pAritmetica(int pTermo,int razao)//
{
	int cont=1,soma=pTermo,proxTermo=1;//soma=1,
	while(cont<=5)//1,2,3,4,5
	{
		proxTermo+=2;//3,5,7,9,11
		soma+=proxTermo;//1+3+5+7+9+11
		cont++;//2,3,4,5,6	
	}
	printf("A soma dos 5 primeiros termos da progressão aritmética será de %d.\n",soma);	
}

int main()
{
	int pTermo,razao;
	printf("Digite o primeiro termo e a razão de uma progressão aritmética,sequencialmente e separando por espaços: ");
	scanf("%d%d",&pTermo,&razao);
	pAritmetica(pTermo,razao);
	return 0;
}
