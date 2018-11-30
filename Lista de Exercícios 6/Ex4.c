/*
4) Fazer um programa que:
a)leia o valor de X de uma unidade de entrada;
b)calcule e escreva o valor do seguinte somatório:
X²⁵/1 - X²⁴/2 + X²³/3 - X²²/4 +...+ X/25
*/

#include <stdio.h>
#include <math.h>

int main()
{

	int X,denom=1,pot,exp=25;
	double div,soma=0.0;
	
	printf("Somatório=X²⁵/1 - X²⁴/2 + X²³/3 - X²²/4 +...+ X/25\n");
	printf("Informe um valor para ser atribuído a variável X do somatório: ");
	scanf("%d",&X);
	
	do
	{
	
		pot=pow(X,exp);//x²⁵,-x²⁴
		div=(float)(pot)/(float)(denom);//x²⁵/1,-x²⁴/2
		soma+=div;//x²⁵/1+(-x²⁴/2)
		X*(-1);//-x²⁵,+x²⁴
		denom++;//2,3
		exp--;//-x²⁴,-x²³
		
	}while(denom<=25);//1<=25,2<=24
	
	printf("O resultado do somatório será de %lf.\n",soma);
	
	return 0;
	
}

