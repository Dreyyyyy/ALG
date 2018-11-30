/*
2) Faça um programa que receba do usuário um número positivo e diferente de zero, calcule e 
mostre: (para cada calculo utilize procedimentos):
1. A quadrado do número;
2. A raiz cúbica do número;
3. A raiz quadrada do número;
4. O cubo do número.
*/

#include <stdio.h>
#include <math.h>

void potencia2(float num)
{
	float pot2;
	pot2=pow(num,2);
	printf("A potência de %.2f elevado a 2 é %f.\n",num,pot2);
}

void raizCubica(float num)
{
	float raiz3;
	raiz3=cbrt(num);
	printf("A raíz cúbica de %.2f é %f.\n",num,raiz3);
}

void raizQuadrada(float num)
{
	float raiz2;
	raiz2=sqrt(num);
	printf("A raíz quadrada de %.2f é %f.\n",num,raiz2);
}

void potencia3(float num)
{
	float pot3;
	pot3=pow(num,3);
	printf("A potência de %.2f elevado a 3 é %f.\n",num,pot3);
}

int main()
{
	float num;
	printf("Digite um número positivo e diferente de zero: ");
	scanf("%f",&num);
	potencia2(num);
	raizCubica(num);
	raizQuadrada(num);
	potencia3(num);
	
	return 0;
}
