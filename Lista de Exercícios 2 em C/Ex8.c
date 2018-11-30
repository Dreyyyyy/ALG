/*
8)Escrever um algoritmo que lê, para cada funcionário, o seu número e o seu salário atual e escreve 
o numero do funcionário, seu salário atual, o percentual de seu aumento e o valor do salário corrigido.
*/

#include <stdio.h>

int main()
{

	int nfunc;
	float salatual,aumento,salcorrigido;
	
	printf("Informe seu número de funcionário:");
	scanf("%d",&nfunc);
	
	printf("Informe seu salário atual:");
	scanf("%f",&salatual);
	
	if(salatual>0)
	{
		if(salatual<=300.00)
		{		
			aumento=salatual*0.10;
			salcorrigido=salatual+aumento;
			printf("%d seu salário corrigido será de R$%.2f.\n",nfunc,salcorrigido);
		}
		if(salatual>=300.01&&salatual<=600.00)
		{
			aumento=salatual*0.11;
			salcorrigido=salatual+aumento;
			printf("%d seu salário corrigido será de R$%.2f.\n",nfunc,salcorrigido);
		}
		if(salatual>=600.01&&salatual<=900.00)
		{
			aumento=salatual*0.12;
			salcorrigido=salatual+aumento;
			printf("%d seu salário corrigido será de R$%.2f.\n",nfunc,salcorrigido);
		}
		if(salatual>=900.01&&salatual<=1500.00)
		{
			aumento=salatual*0.06;
			salcorrigido=salatual+aumento;
			printf("%d seu salário corrigido será de R$%.2f.\n",nfunc,salcorrigido);
		}
		if(salatual>=1500.01&&salatual<=2000.00)
		{
			aumento=salatual*0.03;
			salcorrigido=salatual+aumento;
			printf("%d seu salário corrigido será de R$%.2f.\n",nfunc,salcorrigido);
		}
		if(salatual>2000.00)
			printf("%d você não receberá aumento.\n",nfunc);
	}		
	else
	{
		printf("Salário atual inválido.\n");
	}
	
	return 0;
					
}
