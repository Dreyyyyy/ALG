/*
1) Cada degrau de uma escada tem X de altura. Faça um programa que receba esta altura em 
centímetros e a altura em metros que o usuário deseja alcançar subindo a escada, 
calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo, 
sem se preocupar com a altura do usuário.
*/

#include <stdio.h>

void calculo(float alturaEscada,float cm)
{
	float cmEscada,obj;
	cmEscada=alturaEscada*100;
	obj=cmEscada/cm;
	printf("Você irá subir %.0f degraus para alcançar seu objetivo.\n",obj);
}

int main()
{
	float cm,alturaEscada;
	printf("Digite a altura dos degraus de sua escada em centímetros: ");
	scanf("%f",&cm);
	printf("Digite agora a altura em metros que você deseja alcançar subindo as escadas: ");
	scanf("%f",&alturaEscada);
	calculo(alturaEscada,cm);
	return 0;
}

