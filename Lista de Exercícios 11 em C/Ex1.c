//--------------------Descrição do algoritmo-------------------
//1) Encontrar o maior elemento de um vetor A com 15 elementos.
//-------------------------------------------------------------

//-------------------------Bibliotecas-------------------------
#include <stdio.h>
//-------------------------------------------------------------

//---------------------Protótipo de módulos--------------------
int maiorElemento(int n,int *v);
//-------------------------------------------------------------

//-------------------------Função main-------------------------
int main()
{
	int i,v[15],n=15,m;
	for(i=0;i<15;i++)
	{
		printf("Digite o %dº termo do vetor: ",i+1);
		scanf("%d",&v[i]);
	}
	m=maiorElemento(n,v);
	printf("O maior elemento do vetor informado é: %d\n",m);
	return 0;
}
//-------------------------------------------------------------

//---------------------------Módulos---------------------------
int maiorElemento(int n,int *v)
{
	int maior=0;
	if(n==0)
		maior=v[0];
	else
	{
		maior=maiorElemento(n-1,v);
		if (maior<v[n-1])
			maior=v[n-1];
	}
	return maior;			 
}
//-------------------------------------------------------------

