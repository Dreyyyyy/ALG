/*-----Descrição do exercício-----
11)Escreva um programa para ler 200 notas e armazená-las em um vetor. Admitindo-se que
podem haver erros no processo de digitação, algumas notas podem ser inválidas, isto é, fora
do intervalo entre 0 e 10. Considere a média como sendo 7,0. Desenvolver módulos
(procedimentos ou funções) para determinar o número de notas inválidas, a média das notas
válidas e número de notas acima da média.*/
//-----

//-----Bibliotecas-----
#include <stdio.h>
//-----
void notas(float *n);
//-----Protótipos de módulos-----

//-----

//-----Função main------
int main()
{
	int i;
	float n[200];
	for(i=0;i<200;i++)
	{
		printf("Digite a nota do %dº aluno: ",i+1);
		scanf("%f",&n[i]);
	}
	notas(n);
	return 0;
}
//-----

//-----Módulos-----
void notas(float *n)
{
	int i,nI=0,nA=0,nvd=0;
	float nV=0,m;
	for(i=0;i<200;i++)
	{
		if(n[i]>10||n[i]<0)
			nI++;
		else
		{
			nV+=n[i];
			nvd++;
			if(n[i]>7)
				nA++;
		}	
	}
	m=nV/(float)nvd;
	printf("De 200 notas, %d são inválidas, e a média do restante(notas válidas) é de %.2f, e ocorreram %d notas acima da média.\n",nI,m,nA);
}
//-----


