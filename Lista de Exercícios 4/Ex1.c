/*
1)Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que 
divididos por 11 onde o resto da divisão é igual a 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int cont=1000;
	
	while(cont<=1999)
	{
		if(cont%11==5)
		printf("%d\n",cont);
		
		cont++;
	}
	
	 return 0;
	 
}
