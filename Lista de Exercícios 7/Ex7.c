/*
7)Escrever um procedimento que, tem como parâmetros de entrada um valor em reais. Este 
procedimento calcula qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o 
valor lido pode ser decomposto. Tal procedimento deve apresentar o valor lido e a relação de 
notas necessárias.
*/

#include <stdio.h>

void decompoeNotas(float reais)
{
	float reaisTotal=reais;
	int notas=0,notas100=0,notas50=0,notas10=0,notas5=0,notas1=0;
	while(reais>=100)
	{
		while(reais>=100)
		{
			reais-=100;
			notas++;
			notas100++;
		}
		while(reais>=50)
		{
			reais-=50;
			notas++;
			notas50++;
		}
		while(reais>=10)
		{
			reais-=10;
			notas++;
			notas10++;
		}
		while(reais>=5)
		{
			reais-=5;
			notas++;
			notas5++;
		}
		while(reais>=1)
		{
			reais-=1;
			notas++;
			notas1++;
		}
	}
	while(reais>=50)
	{
		while(reais>=50)
		{
			reais-=50;
			notas++;
			notas50++;
		}
		while(reais>=10)
		{
			reais-=10;
			notas++;
			notas10++;
		}
		while(reais>=5)
		{
			reais-=5;
			notas++;
			notas5++;
		}
		while(reais>=1)
		{
			reais-=1;
			notas++;
			notas1++;
		}
	}
	while(reais>=10)
	{
		while(reais>=10)
		{
			reais-=10;
			notas++;
			notas10++;
		}
		while(reais>=5)
		{
			reais-=5;
			notas++;
			notas5++;
		}
		while(reais>=1)
		{
			reais-=1;
			notas++;
			notas1++;
		}
	}
	while(reais>=5)
	{
		while(reais>=5)
		{
			reais-=5;
			notas++;
			notas5++;
		}
		while(reais>=1)
		{
			reais-=1;
			notas++;
			notas1++;
		}
	}
	while(reais>=1)
	{
		while(reais>=1)
		{
			reais-=1;
			notas++;
			notas1++;
		}	
	}
	printf("Com R$%.2f, você precisará de %d cédulas, sendo %d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1.\n",reaisTotal,notas,notas100,notas50,notas10,notas5,notas1);	
}

int main()
{
	float reais;
	printf("Digite um valor em reais: ");
	scanf("%f",&reais);
	decompoeNotas(reais);
	
	return 0;
}
