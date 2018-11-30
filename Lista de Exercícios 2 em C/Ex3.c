//3) Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3.

#include <stdio.h>

int main()
{
	int num1,num2,num3,num4;
	printf("Digite um primeiro número inteiro:\n");
	scanf("%d",&num1);
	printf("Digite um segundo número inteiro:\n");
	scanf("%d",&num2);
	printf("Digite um terceiro número inteiro:\n");
	scanf("%d",&num3);
	printf("Digite um quarto número inteiro:\n");
	scanf("%d",&num4);
	
	if(num1%2==0&&num1%3==0)
	{
		printf("%d é um número divisível por 2 e 3.\n",num1);
	}
	if(num2%2==0&&num2%3==0)
	{
		printf("%d é um número divisível por 2 e 3.\n",num2);
	}
	if(num3%2==0&&num3%3==0)
	{
		printf("%d é um número divisível por 2 e 3.\n",num3);
	}
	if(num4%2==0&&num4%3==0)
	{
		printf("%d é um número divisível por 2 e 3.\n",num4);
	}
	
	return 0;
	
}
