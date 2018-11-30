/*
8) Construa um programa que, tendo como dados de entrada o preço de um produto e 
um  código  de  origem,  mostre  o  preço  junto  de  sua  procedência  (Ex.:  500.00 –Sul). 
Caso o código não seja nenhum dos especificados, o produto deve ser encarado como importado.
Código de origem:
1 –Sul		5 ou 6 –Nordeste
2 –Norte	7 ou 8 ou 9 –Sudeste
3 –Leste  	10 até 20 –Centro Oeste
4 –Oeste 	25 até 50 –Nordeste
*/

#include <stdio.h>

int main()
{
	float preco;
	int cod;
	
	printf("Digite o preço do produto:\n");
	scanf("%f",&preco);
	
	printf("Digite o código de origem do produto:\n");
	scanf("%d",&cod);
	
	switch(cod)
	{
		case 1:
		{
			printf("R$%.2f -Sul.\n",preco);break;
		}
		
		case 2:
		{
			printf("R$%.2f -Norte.\n",preco);break;
		}
		case 3:
		{
			printf("R$%.2f -Leste.\n",preco);break;
		}
		case 4:
		{
			printf("R$%.2f -Oeste.\n",preco);break;
		}
		case 5:
		{
			printf("R$%.2f -Nordeste.\n",preco);break;
		}
		case 6:
		{
			printf("R$%.2f -Nordeste.\n",preco);break;
		}
		case 7:
		{
			printf("R$%.2f -Sudeste.\n",preco);break;
		}
		case 8:
		{
			printf("R$%.2f -Sudeste.\n",preco);break;
		}
		case 9:
		{
			printf("R$%.2f -Sudeste.\n",preco);break;
		}
		default:
		{
			if(cod>=10 && cod<=20)
			{
				printf("R$%.2f -Centro Oeste.\n",preco);
			}
			if(cod>=25 && cod<=50)
			{
				printf("R$%.2f -Nordeste.\n",preco);
			}
			else if(cod>=21 & cod<=24||cod>=51)
			{
				printf("R$%.2f -Produto importado.\n",preco);
			}
		}break;

	}
	
	return 0;
	
}
