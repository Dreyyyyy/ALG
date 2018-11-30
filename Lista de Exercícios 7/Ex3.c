/*
3) Desenvolva um programa para fazer a conversão de Real para Dollar e vice e versa. 
Para isso o usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. 
Apresente o valor convertido. Para realizar as conversões utilize funções especificas.
*/

#include <stdio.h>

void convReal(float dolar,float cotacaoDolar)
{
	float dolarReal;
	dolarReal=dolar/cotacaoDolar;
	printf("O valor de U$%.2f, se convertido para reais será de R$%.2f.\n",dolar,dolarReal);
}

void convDolar(float real,float cotacaoDolar)
{
	float realDolar;
	realDolar=real/cotacaoDolar;
	printf("O valor de R$%.2f, se convertido para dólares será de U$%.2f.\n",real,realDolar);
}

int main()
{
	float dolar,real,cotacaoDolar;
	int moeda;
	printf("1-Dólar;\n");
	printf("2-Real;\n");
	printf("Digite o número referente a moeda que deseja usar como base para conversão em sua oposta: ");
	scanf("%d",&moeda);
	while(moeda>2||moeda<1)
	{
		printf("Opção de moeda inexistente! Digite novamente a opção, seja 1 ou 2: ");
		scanf("%d",&moeda);
	}
	if(moeda==1)
	{
		printf("Você escolheu Dolár como base para conversão em Real.\n");
		printf("Digite agora o valor em dólares que deseja converter: ");
		scanf("%f",&dolar);
		printf("Digite agora a cotação atual do dólar: ");
		scanf("%f",&cotacaoDolar);
		convReal(dolar,cotacaoDolar);
	}
	if(moeda==2)
	{
		printf("Você escolheu Real como base para conversão em Dólares.\n");
		printf("Digite agora o valor em reais que deseja converter: ");
		scanf("%f",&real);
		printf("Digite agora a cotação atual do dólar: ");
		scanf("%f",&cotacaoDolar);
		convDolar(real,cotacaoDolar);
	}
	return 0;
}


