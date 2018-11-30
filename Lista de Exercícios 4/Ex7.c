/*
7) Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser 
calculado pela soma dos valores de uma série infinita, como mostrado abaixo:
e=1/0!+2/1!+1/3!+1/4!+1/5!+...
Fazer  um  programa  em  C  que  calcule  este  número  (e)  considerando  apenas  as  15  (quinze) 
primeiras parcelas.
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int i)
{

	if(i<=1)return 1;
	
	return i*fatorial(i-1);
}

int main()	
{

	int denominador=0;
	double e=0;
	
	while(denominador<15)
	{
		e+=(float)1/fatorial(denominador);
		denominador++;
	}
	
	printf("%.15lf\n",e);
}	

