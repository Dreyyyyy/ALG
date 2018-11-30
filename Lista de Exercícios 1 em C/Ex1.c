/*
1.
Escreva um programa para ler, calcular e escrever a média aritmética entre dois números.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float nota1,nota2,media;
	printf("Informe um primeiro número para o cálculo da média:");
	scanf("%f",&nota1);
	printf("Informe um segundo número para o cálculo da média:");
	scanf("%f",&nota2);
	media=(nota1+nota2)/2;
	printf("A média aritmética será de:%.2f",media);
	
	return 0;
	} 	


