/*
1) Fazer um programa para ler a primeira letra do estado civil de uma pessoa (Solteiro, 
Casado, Viúvo, Divorciado, Uniaoestavel) e mostrar uma mensagem com a descrição. 
Considere letras maiúsculas e minúsculas. Mostre mensagem de erro, se necessário.
*/

#include <stdio.h>

int main()
{

	char estadoCivil;
	
	printf("Informe a primeira letra do estado cívil, sendo S para Solteiro, C para casado, V para viúvo, D para divorciado e U para União Estável:\n");
	scanf("%c",&estadoCivil);
	
	switch(estadoCivil)
	{
		case 'S':
		{
			printf("Seu estado cívil é solteiro.\n");break;
		}
		case 'C':
		{
			printf("Seu estado cívil é casado.\n");break;
		}
		case 'V':
		{
			printf("Seu estado cívil é viúvo.\n");break;
		}
		case 'D':
		{
			printf("Seu estado cívil é divorciado.\n");break;
		}
		case 'U':
		{
			printf("Você possui uma união estável.\n");break;
		}
		default:
		{
			printf("Letra Inválida!\n");break;
		}
	}
	
	return 0;
	
}
