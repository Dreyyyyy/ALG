/*
2) Fazer um programa para ler um código (número inteiro) e mostrar uma mensagem.
*/

#include <stdio.h>

int main()
{

	int cod;
	
	printf("Digite um código, que seja um número inteiro:\n");
	scanf("%d",&cod);
	
	switch(cod)
	{
		case 1:
		{
			printf("Grupo com 50%% de promoção\n");break;
		}
		case 3:
		{
			printf("Grupo sem desconto.\n");break;
		}
		case 5:
		{
			printf("Grupo sem desconto.\n");break;
		}
		case 10:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 11:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 12:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 13:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 14:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 15:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 16:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 17:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 18:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 19:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		case 20:
		{
			printf("Grupo com 10%% de promoção\n");break;
		}
		default:
		{
			printf("Código inválido!\n");break;
		}
	} 
	
	return 0;
	
} 

