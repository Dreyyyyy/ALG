/*
5)
Calcule o imposto de renda de um contribuinte considerando que os dados do contribuinte são: número do CPF, número de dependentes e renda mensal. 
Para o contribuinte será feito um desconto de 5% de salário mínimo por dependente.
*/

#include <stdio.h>

int main()
{
	
	long int cpf;
	int dependentes;
	float rendam,desc,imp,salmin=965.00;
	printf("Informe seu número de CPF:\n");
	scanf("%ld",&cpf);
	printf("Informe o número de dependentes:\n");
	scanf("%d",&dependentes);
	printf("Informe a sua renda mensal:\n");
	scanf("%f",&rendam);
	desc=(salmin*0.05)*dependentes;
	
	if(rendam<2*salmin)
	{
		printf("Você está isento de pagar o imposto.\n");
	}
	if(rendam>2*salmin&&rendam<3*salmin)
	{
		imp=(rendam+desc)*0.05;
		printf("%ld deverá pagar R$%.2f de imposto.\n",cpf,imp);
	}
	if(rendam>3*salmin&&rendam<5*salmin)
	{
		imp=(rendam+desc)*0.10;
		printf("%ld deverá pagar R$%.2f de imposto.\n",cpf,imp);
	}
	if(rendam>5*salmin&&rendam<7*salmin)
	{
		imp=(rendam+desc)*0.15;
		printf("%ld deverá pagar R$%.2f de imposto.\n",cpf,imp);
	}
	if(rendam>7*salmin)
	{
		imp=(rendam+desc)*0.20;
		printf("%ld deverá pagar R$%.2f de imposto.\n",cpf,imp);
	}
	
	return 0;
	
}
