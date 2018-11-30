/*
9) Uma empresa fez uma pesquisa com 100 de seus funcionários, coletando dados sobre o 
salário e número de filhos. A empresa deseja saber: a média salarial destes funcionários; a 
média do número de filhos; e o percentual de pessoas com salário de até R$ 300,00, que possuem filhos.
*/

#include <stdio.h>

int main()
{
int cont=1,somaf=0,mdf,np=0,ntp=100,nf;
float somas=0.0,mds,pp,sal;
				
	while(cont<=100)
	{
		printf("Digite o número de filhos: ");
		scanf("%d",&nf);
								
		printf("Informe o seu salário mensal: ");
		scanf("%f",&sal);
								
		somas+=sal;
		somaf+=nf;
								
		if(sal<=300&&nf>0)
		{
			np++;
		}
								
		cont++;											
	}
				
	mds=somas/100;
	mdf=somaf/100;
	pp=(np*100)/ntp;
				
	printf("A média salarial dos 100 funcionários é de R$%.2f.\n",mds);
				
	printf("A média de filhos dos 100 funcionários é de %d.\n",mdf);
				
	printf("e a porcentagem de pessoas que recebem até R$300.00 e possuem filhos é de %.2f%%.\n",pp);
				
	return 0;			
}
