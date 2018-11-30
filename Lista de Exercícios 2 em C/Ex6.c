/*
6)
Escrever um algoritmo que lê o número de identificação e as 
3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação. 
Para cada aluno, calcular a média de aproveitamento, usando a fórmula:
MA = (N1 + N2 x 2 + N3 x 3 + ME)/7
*/

#include <stdio.h>
int main()
{

	long int nidentific;
	float nota1,nota2,nota3,ME,MA;
	char conceito;
	printf("Informe o número de identificação:");
	scanf("%ld",&nidentific);
	printf("Informe a primeira nota:");
	scanf("%f",&nota1);
	printf("Informe a segunda nota:");
	scanf("%f",&nota2);
	printf("Informe a terceira nota:");
	scanf("%f",&nota3);
	printf("Informe a média dos exercícios:");
	scanf("%f",&ME);
	MA=(nota1+nota2*2+nota3*3+ME)/7;
	if(MA>=9.0)
	{
		conceito='A';
	}
	if(MA>=7.5&&MA<9.0)
	{
		conceito='B';
	}	
	if(MA>=6.0&&MA<7.5)
	{
		conceito='C';
	}
	if(MA>=4.0&&MA<6.0)
	{
		conceito='D';
	}
	if(MA<4.0)
	{
		conceito='E';
	}
	if(conceito=='A'||conceito=='B'||conceito=='C')
	{
		printf("Pelo conceito %c, o aluno %ld, com as notas %.2f,%.2f e %.2f, com a média dos exercícios de %.2f e a média de aproveitamento de %.2f está aprovado.",conceito,nidentific,nota1,nota2,nota3,ME,MA);
	}
	else
	{
		printf("Pelo conceito %c, o aluno %ld, com as notas %.2f,%.2f e %.2f, com a média dos exercícios de %.2f e a média de aproveitamento de %.2f está reprovado.",conceito,nidentific,nota1,nota2,nota3,ME,MA);
	}
	
	return 0;
	
}	
