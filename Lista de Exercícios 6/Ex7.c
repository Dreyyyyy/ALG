/*
7) Fazer um programa que calcule o volume de uma esfera em função do raio R. O raio deverá 
variar de 0 a 20 cm de 0.5 em 0.5cm.
V=4/3*pi*R³
*/

#include <stdio.h>
#include <math.h>

int main()
{

	double pi=3.14,raio=0,V;
	
	do
	{
	
		V=(float)4/(float)3*pi*pow(raio,3);//4/3*3.14*0³,4/3*3.14*0.5³
		printf("Quando o raio for de %.2f, o volume da esfera será de %lf.\n",raio,V);
		raio+=0.5;//0.5,
		
	}while(raio<=20); 
	
	return 0;
	
}
