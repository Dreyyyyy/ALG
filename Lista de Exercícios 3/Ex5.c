/*
5) Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste 
de  acordo  com  a  categoria:  se  a  mesma  for  A=50%,  B=25%,  C=15%  e  outras  5%. 
Depois mostre o valor antigo, o percentual de reajuste e o valor reajustado.
*/

#include <stdio.h>

int main()
{

	float preco,precoAjustado,reajuste;
	char categoria;
	
	printf("Digite o preço do produto:\n");
	scanf("%f",&preco);
	
	printf("Digite a categoria do produto, sendo ela: A, B, C:\n");
	scanf(" %c",&categoria);
	
	switch(categoria)
	{
		case 'A':
		{
			reajuste=preco*0.50;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
		case 'a':
		{
			reajuste=preco*0.50;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
		case 'B':
		{
			reajuste=preco*0.25;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
		case 'b':
		{
			reajuste=preco*0.25;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
		case 'C':
		{
			reajuste=preco*0.15;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
		case 'c':
		{
			reajuste=preco*0.15;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
		default:
		{
			reajuste=preco*0.05;
			precoAjustado=preco+reajuste;
			printf("O valor antigo do produto era de R$%.2f, o percentual de reajuste foi de %.2f%% e o valor reajustado é de R$%.2f\n",preco,reajuste,precoAjustado);break;
		}
	}
	
	return 0;
	
}
