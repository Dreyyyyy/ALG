/*
6) Faca um programa que pergunte ao usuário o número de alunos a ser lido. O tamanho dos
vetores será o numero informado pelo usuário. Armazene num vetor as notas G1 destes
alunos; num outro vetor, armazene as notas G2 destes alunos. Ambas notas, G1 e G2, são
informadas pelo usuário. Calcule a media aritmética destes alunos e armazene num terceiro
vetor. Ao final, mostre as 3 notas dos alunos.
*/

#include <stdio.h>

void mediaAritmetica(float *vetorG1,float *vetorG2,int nAlunos,float *vetorM);

int main()
{
	int nAlunos,i;
	printf("Este algorítmo lê as notas G1 e G2 dos alunos de uma classe, calcula a média aritmética e depois apresenta todas as 3 notas.\n");
	printf("Digite o número de alunos da sala: ");
	scanf("%d",&nAlunos);
	float vetorG1[nAlunos];
	float vetorG2[nAlunos];
	float vetorM[nAlunos];
	for(i=0;i<nAlunos;i++)
	{
		printf("Informe as notas G1 do %dº aluno: ",i+1);
		scanf("%f",&vetorG1[i]);
	}
	for(i=0;i<nAlunos;i++)
	{
		printf("Informe as notas G2 do %dº aluno: ",i+1);
		scanf("%f",&vetorG2[i]);
	}
	mediaAritmetica(vetorG1,vetorG2,nAlunos,vetorM);
	return 0;
}

void mediaAritmetica(float *vetorG1,float *vetorG2,int nAlunos,float *vetorM)
{
	int i;
	for(i=0;i<nAlunos;i++)
	{
		vetorM[i]=(vetorG1[i]+vetorG2[i])/2;
		printf("As notas do %dº Aluno são: G1=%.2f,G2=%.2f e Média=%.2f.\n",i,vetorG1[i],vetorG2[i],vetorM[i]);
	}
}
