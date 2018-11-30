/*
14) Escrever um programa que lê um conjunto de 4 valores i,a,b,c, onde i é um valor inteiro e 
positivo e a,b,c, são quaisquer valores reais e os escreva. A seguir:
1. Se i = 1 escrever os três valores a,b,c em ordem crescente.
2. Se i = 2 escrever os três valores a,b,c em ordem decrescente.
3. Se i = 3 escrever os três valores a,b,c de forma que o maior entre a,b,c fique dentre os dois.
*/

#include <stdio.h>

int main()
{
	
	int i;
	float a,b,c,maior,medio,menor;
	
	printf("Digite um número entre 1,2 ou 3:");
	scanf("%d",&i);
	
	printf("Digite um número qualquer para ser atribuido a variável A:\n");
	scanf("%f",&a);
	
	printf("Digite um número qualquer para ser atribuido a variável B:\n");
	scanf("%f",&b);
	
	printf("Digite um número qualquer para ser atribuido a variável C:\n");
	scanf("%f",&c);
	
	if(a>=b & a<=c)
	{
		maior=c;
		medio=a;
		menor=b;
	}
	if(a>=c & a<=b)
	{
		maior=b;
		medio=a;
		menor=c;
	}
	if(b>=a & b<=c)
	{
		maior=c;
		medio=b;
		menor=a;
	}	
	if(b>=c & b<=a)
	{
		maior=a;
		medio=b;
		menor=c;
	}	
	if(c>=a & c<=b)
	{
		maior=b;
		medio=c;
		menor=a;
	}
	if(c>=b & c<=a)
	{
		maior=a;
		medio=c;
		menor=b;
	}

	if(i==1||i==2||i==3)
	{	
		if(i==1)
		{
			printf("Ordem Crescente: %.2f, %.2f e %.2f\n",menor,medio,maior);
		}
		if(i==2)
		{
			printf("Ordem Decrescente:%.2f, %.2f e %.2f\n",maior,medio,menor);
		}
		if(i==3)
		{
			printf("Maior no meio do conjunto:%.2f, %.2f e %.2f\n",medio,maior,menor);
		}
	}
	else
	{
		printf("O primeiro número informado não está entre 1,2 ou 3.\n");
	}
	
	return 0;	
	
}
