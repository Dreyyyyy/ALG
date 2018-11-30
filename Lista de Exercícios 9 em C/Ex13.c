/*-----Descrição do exercício-----
13) Dados dois vetores X e Y de 20 posições cada, determinar o produto escalar entre os dois
vetores. O produto escalar entre dois vetores é dado por:
x0y0+x1y1+x2y2+x3y3+...*/
//-----

//-----Bibliotecas-----
#include <stdio.h>
//-----

//-----Protótipos de módulos-----
int produtoEscalar(int *x,int *y);
//-----

//-----Função main-----
int main()
{
	int i,x[20],y[20],pE;
	for(i=0;i<20;i++)
	{
		printf("Digite o %dº termo para ser alocado ao vetor X: ",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<20;i++)
	{
		printf("Digite o %dº termo para ser alocado ao vetor Y: ",i+1);
		scanf("%d",&y[i]);
	}
	pE=produtoEscalar(x,y);
	printf("O produto escalar dos vetores informados será: %d\n",pE);		
	return 0;
}
//-----

//-----Módulos-----
int produtoEscalar(int *x,int *y)
{
	int i,pE=0;
	for(i=0;i<20;i++)
	{
		pE+=x[i]*y[i];
	}
	return pE;
}
//-----
