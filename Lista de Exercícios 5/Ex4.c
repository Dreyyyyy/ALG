/*
4) Faça um programa que receba a idade, a altura de 15 pessoas. Calcule e escreva:
1.a quantidade de pessoas com idade superior a 50 anos;
2.a média das alturas das pessoas com idade entre 10 e 20 anos;
3.a maior altura encontrada;
*/

#include <stdio.h>

int main()
{

	int i,idade,jovem=0,velho=0;
	float alt,malt=0,altm=0;
	
	for(i=0;i<15;i++)
	{
		printf("Informe sua idade:\n");
		scanf("%d",&idade);
		printf("Informe sua altura:\n");
		scanf("%f",&alt);
		
		if(idade>50&&idade>0)
		{
			velho++;	
		}
		else if(idade>=10&&idade<=20&&idade>0)
		{
			jovem++;
			malt+=alt;
		}
		if (alt>altm)
		{
			altm=alt;
		}
	}
	
	printf("O número de pessoas com idade superior a 50 é de %d.\n",velho);
	printf("A média da altura das pessoas com idade entre 10 e 20 anos é de %.2f.\n",malt/jovem);
	printf("A maior altura encontrada é de %.2f.\n",altm);
	
	return 0;
		
}

