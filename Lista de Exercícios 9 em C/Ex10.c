/*
10) Sendo dado um conjunto A de 100 números inteiros ,determinar 2 outros conjuntos,
contendo o primeiro conjunto os números negativos de A e o segundo conjunto os números
que são múltiplos de um número inteiro X . Observação: Considerar que existam pelo menos
um múltiplo e um negativo.
*/

#include <stdio.h>

void numNegativos(int *conjuntoA);
void numMultiplosX(int *conjuntoA);

int main()
{
	int i,conjuntoA[100],x
	for(i=0;i<100;i++)
	{
		printf("Digite o %dº elemento do conjunto A: ";i+1);
		scanf("%d",&conjuntoA[i]);
	}
	printf("Digite agora um número inteiro para ser atribuido a variável x: ");
	scanf("%d",&x);
	numNegativos(conjuntoA);
	numMultiplosX(conjuntoA);
	return 0;
}


