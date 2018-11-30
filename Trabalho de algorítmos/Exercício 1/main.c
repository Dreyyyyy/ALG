//-------------------------------------------------------------------------Bibliotecas-------------------------------------------------------------------------
#include <stdio.h>
#include "recursividade.h"
#include <string.h>
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------Função principal---------------------------------------------------------------------
int main()
{
	int a,b,n,L,i,y,tam,C,j,vet[100],po=0,maior,tamanho,number;
	float produto=1,k;
	printf("Digite 2 números naturais respectivamente, para multiplicação e potenciação(A^b) dos mesmos: ");
	scanf("%d%d",&a,&b);
	printf("Digite um número natural para o cálculo de seu fatorial, com ele será também calculado o número da n-ésima posição de fibonacci, os números ímpares no intervalo deste número a 0, e o produto dos pares do intervalo deste número a 0: ");
	scanf("%d",&n);
	printf("Multiplicação=%d\n",multiplicacao(a,b));
	printf("Potenciação=%d\n",potencia(a,b));
	printf("Fatorial=%d\n",fatorial(n));
	printf("Fibonacci=%d\n",fibonacci(n));
	printf("Ímpares:");
	impressorimpar(n);
	printf("\n");
	if(n>2)
		printf("Produto dos pares=%d\n",produtosPares(n));
	else
		printf("Não há pares neste conjunto.\n");
//-----------------------------------------------------------Não conseguimos com recursividade-----------------------------------------------------------------
	printf("Informe a quantidade de linhas: ");
	scanf("%d",&L);
	printf("Informe a quantidade de colunas: ");
	scanf("%d",&C);
	int ma[L][C],vL[C],somatot=0;
	for(i=0;i<L;i++)
		{
		for(j=0;j<C;j++)
			{
			printf("Digite o termo da %d° linha e %d° coluna da matriz: ",i+1,j+1);
			scanf("%d",&ma[i][j]);
			}
		}
	for(i=0;i<L;i++)
		{
		for(j=0;j<C;j++)
			{
			printf("%d\t",ma[i][j]);
			}
		printf("\n");
		}
	for(i=0;i<L;i++)
		{
		for(j=0;j<C;j++)
			{
			somatot=ma[i][j]+somatot;
			if (ma[i][j]==ma[i+1][i+1])
			    {
		    somatot=ma[i][j]-somatot;
			    }
			}
		}
	printf("A soma do triângulo inferior esquerdo é de: %d.\n",somatot);
	printf("OBS: A primeira posição é o 0.\n");
	printf("Digite o seu termo k: ");
	scanf("%f",&k);
	printf("Digite o tamanho do seu vetor: ");
	scanf("%d",&tamanho);
	    for(i=0;i<tamanho;i++)
	    {
	    printf("Entre com os valores do vetor:");
	    scanf("%d",&number);
	    vet[i]=number;
	    if (po==k)
		{
		printf("O elemento que combina com o seu k é o %d, na posição %d.\n",number,po);
		}
	    po=po+1;
	    }
	if (k<0 || k>tamanho)
	{
	    printf("A posição do seu k é -1, pois inexiste!\n");
	}
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&L);
	float mb[L];
	for(i=0;i<L;i++)
		{
		printf("Digite o %d° elemento de seu vetor: ",i+1);
		scanf("%f",&mb[i]);
		}
	printf("Esse é o seu vetor: \n");
	for(i=0;i<L;i++)
		{
	    printf("%.2f\t",mb[i]);
		}
	for (i=0;i<L;i++)
	    {
	    produto=mb[i]*produto;
	    }
	printf("\nO produto dos elementos de seu vetor é de %f.",produto);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------	
	return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
