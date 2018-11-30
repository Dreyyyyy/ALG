/*------------------------------------------Descrição do Algoritmo------------------------------------------
6)  Escrever  um  programa que  lê  uma matriz  M[6,6]  e  um  valor  A  e  multiplica  a matriz  M  pelo 
valor  A  e  coloca  os  valores  da matriz  multiplicados  por  A  em  um  vetor  de  V[36]  e  escreve  no 
final o vetor V.*/
//----------------------------------------------------------------------------------------------------------

//-----------------------------------------------Bibliotecas------------------------------------------------
#include <stdio.h>
//----------------------------------------------------------------------------------------------------------

//-----------------------------------------------Função main------------------------------------------------
int main()
{
	int M[6][6],i,j,V[36],k=0;
	float A;
	printf("Informe um valor para multiplicar toda a matriz: ");
	scanf("%f",&A);
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Digite o termo da %dº linha e %dº coluna: ",i+1,j+1);
			scanf("%d",&M[i][j]);
			V[k]=M[i][j]*A;
			k++;
		}
	}
	for(i=0;i<36;i++)
		printf("V[%d]=%d\n",i+1,V[i]);
	return 0;
}
//----------------------------------------------------------------------------------------------------------



