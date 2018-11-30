/*-----Descrição do exercício-----
12) Escreva uma função que recebe um vetor e seu tamanho. A função deve trocar o primeiro
elemento com o último, o segundo elemento com o penúltimo, até o meio do vetor.*/
//-----

//-----Bibliotecas-----
#include <stdio.h>
//-----

//-----Protótipos de módulos-----
int trocaE(int *v,int t);
//-----

//-----Função main-----
int main()
{
	int t,i;
	printf("Digite o tamanho do vetor desejado: ");
	scanf("%d",&t);
	int v[t];//5
	for(i=0;i<t;i++)
	{
		printf("Digite o %dº elemento do vetor: ",i+1);
		scanf("%d",&v[i]);
	}	
	printf("Dado o vetor: ");
	for(i=0;i<t;i++)
	{
		printf(" %d ",v[i]);
	}
	printf("\n");
	trocaE(v,t);
	printf("Se invertido termo por termo do primeiro ao último, ficará da seguinte forma: ");
	for(i=0;i<t;i++)
	{
		printf(" %d ",v[i]);
	}
	printf("\n");
	return 0;
}
//-----

//-----Módulos-----
int trocaE(int *v,int t)
{
	int i,vAux=0;
	for(i=0;i<t;i++)
	{
		vAux=v[i];
		v[i]=v[t-1];
		v[t-1]=vAux;
		t--;
	}
}
//-----


