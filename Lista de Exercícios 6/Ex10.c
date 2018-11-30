/*
10) Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de 
um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta 
(sim ou não). Sabendo
-
se que foram entrevistadas 2.000 pessoas, fazer um programa que calcule 
e escreva:

o número de pessoas que responderam sim;

o número de pessoas que responderam não;

a porcentagem de pessoas do sexo feminino que responderam sim;

a porcentagem de pessoas do sexo masculino que responderam não.
*/

#include <stdio.h>

int main()
{

	int cf=0,cfs=0,cm=0,cmn=0,cg=0,resp=0,cs=0,cn=0;
	float pfs,pmn;
	char sexo;
	
	do
	{
		do
		{
		printf("\nInforme o sexo M ou F:");
		scanf(" %c",&sexo);
		}while((sexo!='M')&&(sexo!='m')&&(sexo!='F')&&(sexo!='f');
		do
		{
			printf("\nInforme 1-Sim 2-Nao");
			scanf("%d",&resp);
		}while((resp!=1)&&(resp!=2);
		if(resp==1)
			cs++;
		else
			cn++;
		if(sexo=='F'||sexo=='f')
		{
			cf++;
			if(resp==1)
				cfs++;
		}
		else
		{
			cm++;
			if(resp==1)
				cmn++;
		}
	cg++;	
	}while(cg<2000);
	pfs=(float)(cfs*100)/(float)cf;
	pmn=(float)(cmn*100)/(float)cm;
	printf("\nPessoas que responderam sim: %d",cs);
	printf("\nPessoas que responderam não: %d",cn);
	printf("\n%% mulheres que responderam não: %.0f",pfs);
	printf("\n%% homens que responderam não: %.0f",pmn);
	
	return 0;
	
}

