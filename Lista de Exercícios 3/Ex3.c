/*
3)  Um  vendedor  necessita  de  um  programa  que  calcule  o  preço  total  devido  por  um 
cliente. O programa deve receber o código de um produto e a  quantidade comprada e 
calcular  o  preço  total,  usando  a  tabela  abaixo.  Mostrar  uma  mensagem  no  caso  de 
código inválido.
Código Produto		Preço Unitário
1001			R$ 5,32
1324			R$ 6,45
6548			R$ 2,37
987			R$ 5,32
7623			R$ 6,45
*/

#include<stdio.h>

int main()
{

	int cod,qtd;
	float total,precou;
	
	printf("Digite o código do seu produto, sendo os códigos disponíveis para leitura:1001,1324,6548,987,7623:\n");
	scanf("%d",&cod);
	
	printf("Digite agora a quantidade comprada do produto:");
	scanf("%d",&qtd);
	
	switch(cod)
	{
		case 1001:
		{
			precou=5.32;
			total=precou*qtd;
			printf("Você deverá pagar R$%.2f.\n",total);break;
		}
		case 1324:
		{
			precou=6.45;
			total=precou*qtd;
			printf("Você deverá pagar R$%.2f.\n",total);break;	
		}
		case 6548:
		{
			precou=2.37;
			total=precou*qtd;
			printf("Você deverá pagar R$%.2f.\n",total);break;	
		}
		case 987:
		{
			precou=5.32;
			total=precou*qtd;
			printf("Você deverá pagar R$%.2f.\n",total);break;	
		}
		case 7623:
		{
			precou=6.45;
			total=precou*qtd;
			printf("Você deverá pagar R$%.2f.\n",total);break;
		}
		default:
		{
			printf("Código Inválido!\n");break;
		}
	}
	
	return 0;
	
}
