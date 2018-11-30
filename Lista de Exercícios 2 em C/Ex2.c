/*
2) Fazer um programa para calcular o salário líquido de um funcionário com base na seguinte fórmula: 
SALARIO LIQUIDO=SALARIO BRUTO+PROVENTOS-DESCONTO
Devem ser respeitadas as seguintes condições para cálculo do desconto:
-Salário Bruto <=50, desconto de 5%;
-Salário Bruto > 50, desconto de 10 %
*/

#include <stdio.h>

int main()
{
	float sliquid,sbruto,prov,desc,aux;
	printf("Informe seu salário bruto:\n");
	scanf("%f",&sbruto);
	printf("Informe seus proventos:\n");
	scanf("%f",&prov);
	aux=sbruto+prov;
	
	if(sbruto<=50)
	{
		desc=aux*0.05;
		sliquid=aux-desc;
		printf("O seu salário líquido é de R$%.2f.\n",sliquid);
	}
	if(sbruto>50)
	{
		desc=aux*0.10;
		sliquid=aux-desc;
		printf("O seu salário líquido é de R$%.2f.\n",sliquid);
	}
	
	return 0;
	
}
