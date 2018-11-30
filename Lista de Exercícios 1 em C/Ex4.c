/*4.Faça um programa que leia o número do funcionário, o número de horas 
trabalhadas mensais, o valor que recebe por hora e o número de filhos com 
idade menor de 14 anos. Calcular e escrever o salário deste funcionário, sendo 
que cada filho menor de 14 anos acrescenta 10% do salário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nfunc,nhtm,fm14;
	float vrph,salaux,acr,sal;
	printf("Informe o número do funcionário:");
	scanf("%d",&nfunc);
	printf("Informe o número de horas trabalhadas mensais:");
	scanf("%d",&nhtm);
	printf("Informe o valor que recebe por hora:");
	scanf("%f",&vrph);
	printf("Informe o número de filhos com idade menor de 14 anos:");
	scanf("%d",&fm14);
	salaux=nhtm*vrph;
	acr=(sal*fm14)*0.10;
	sal=salaux+acr;
	printf("O salário do funcionário %d é de:R$%.2f.",nfunc,sal);
	
	return 0;
	}
	
