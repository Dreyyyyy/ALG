/*3.Escreva um programa que calcule o volume de uma esfera. Para tanto, o 
usuário deve fornecer a medida do raio da mesma.
Nota: lembre-se que o volume da esfera é dado por: V=4/3*3.14*r³
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>//sempre por -lm na hora da compilação!

int main(){
	
	float raio,volume;
	printf("Informe o raio da esfera:");
	scanf("%f",&raio);
	volume=4/3*3.14*pow(raio,3);
	printf("O volume da esfera é de %.2f",volume);
	
	return 0;
	}
	
