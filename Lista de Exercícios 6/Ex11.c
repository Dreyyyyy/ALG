/*
11) Um cinema  que  possui capacidade de  100 lugares está  sempre  com ocupação total. 
Certo dia cada espectador respondeu a um questionário, no qual constava:
-sua idade;
-sua opinião em relação ao filme, segundo:
ótimo= *****
bom= ****
regular= ***
ruim= **
péssimo= *
Elabore um programa que, lendo estes dados, calcule e imprima:
-a quantidade de respostas ótimo;
-a diferença percentual entre respostas bom e regular;
-a média de idade das pessoas que responderam ruim;
-a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
-a diferença  de  idade  entre  a  maior  idade  que  respondeu  ótimo  e  a  maior  idade  que 
respondeu ruim.
*/

#include <stdio.h>

int main()
{

	int lugares=1,idade,op,otimo=0,bom=0,regular=0,ruim=0,pessimo=0,totalp=100,idadeRuim=0,mIdadeR=0,mIdadeO=0,difid,mIdadep=0,pd1p;
	float pdiferenca,mIdRuim,pRespPes;

	do
	{
	
		printf("Digite sua idade: ");//18
		scanf("%d",&idade);
		printf("Informe qual a sua opinião em relação ao filme, sendo 5 para ótimo,4 para bom, 3 para regular, 2 para ruim e 1 para péssimo: ");
		scanf("%d",&op);//5
		while(op<0||op>5)
		{
		
			printf("Número digitado para opinião inválida! Digite novamente: ");
			scanf("%d",&op);
		}
		if(op==5)
		{
			otimo++;
			if(idade>mIdadeO)
			{
				mIdadeO=idade;
			}
		}		
		if(op==4)
			bom++;
		if(op==3)
		{
			regular++;

		}	
		if(op==2)
		{
			ruim++;
			idadeRuim+=idade;
			if(idade>mIdadeR)
			{
				mIdadeR=idade;
			}	
		}		
		if(op==1)
		{
			pessimo++;
			if(idade>mIdadep)
			{
				mIdadep=idade;
			}		
		}
							
	lugares++;
	}while(lugares<=3);//100
	printf("Dentre os 100 entrevistados, foram obtidos %d respostas com a opinião ótimo.\n",otimo);
	pd1p=bom-regular;
	pdiferenca=((float)pd1p/(float)bom)*(float)100;
	mIdRuim=(float)idadeRuim/(float)ruim;
	pRespPes=((float)pessimo*(float)100)/(float)3;//100
	difid=mIdadeO-mIdadeR;
	printf("A diferença percentual entre respostas bom e regular é de %.2f.\n",pdiferenca);
	printf("A média da idade das pessoas que deram sua opinião como ruim é de %.2f.\n",mIdRuim);
	printf("A percentagem de opiniões péssimas é de %.2f, e a maior idade que utilizou essa opção foi de %d anos.\n",pRespPes,mIdadep);
	printf("A diferença entre a maior idade que opinou ótimo e a maior idade que opinou ruim é de %d.\n",difid);
	
	return 0;
	
}
