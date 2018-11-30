/*
8) Faça um programa que leia 10 números inteiros positivos, calcule e escreva os que são números 
perfeitos. Sendo que, um número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual 
ao número.
Exemplo: 
6 é perfeito porque 1 + 2 + 3 = 6
28 é perfeito porque 1 + 2 + 4 + 7 + 14 = 28
*/

#include <stdio.h>

int main()
{

	int n,c,somad,cd;
	
	for(c=1;c<=10;c++)
	{
		somad=0;
		printf("\nInforme número:");
		scanf("%d",&n);
		
		for(cd=n-1;cd>1;cd--)
		{
			if((n%cd)==0)
			{
				somad=somad+cd;
			}	
		}
		if(soma==n)
		{
			printf("\nNúmero %d é perfeito!",n);
		}
		else
		{
			printf("\nNúmero %d não é perfeito!",n);
		}	
	}
	
	return 0;
	
}
