/*
6) Construa um procedimento que, tem como parâmetros de entrada dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é:
D=sqrt(x2-x1)²+(y2-y1)²
*/

#include <stdio.h>
#include <math.h>

void distanciaPontos(int x1,int y1,int x2,int y2)
{
	int x,y,distancia;
	x=pow(x2-x1,2);
	y=pow(y2-y1,2);
	distancia=sqrt(x+y);
	printf("A distância entre os dois pontos informados será de %d.\n",distancia);
}

int main()
{
	int x1,y1,x2,y2;
	printf("Informe dois pontos qualquer no plano cartesiano, sendo x1,y1,x2,y2, sequencialmente e separados com espaço: ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	distanciaPontos(x1,y1,x2,y2);
	return 0;
}

