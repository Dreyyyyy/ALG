/*
7) Fazer um algoritmo para determinar e escrever o valor do seguinte somatório: 
S = X –X2/3! + X4/5! –X6/7! + X8/!9 - ... usando os n primeiros termos do somatório. O valor de X e de n é fornecido pelo usuário.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	float s;
	int cont=1,x,denom,n,fat,exp,cfat,multi=-1;
	
	printf("Informe x e n: ");
	scanf("%d%d",&x,&n);
	
	s=x;//primeiro termo
	exp=2;//resolvendo a partir do segundo termo
	denom=3;
	
		for(cont=1;cont<n;cont++)//nº de termos
		{
			fat=1;
			for(cfat=denom;cfat>1;cfat--)//resolve o fatorial
			{
				fat=fat*cfat;
			}
			
			s=s+((pow(x,exp)/fat)*multi);
			multi=multi*-1;
			exp=exp+2;
			denom=denom+2;
		}
		
		printf("\nResultado:%f\n",s);
		
}
