int multiplicacao (int a,int b)
{
	if(b==0) return 0;
	if(b==1) return a;
	return a+multiplicacao(a,b-1);
}

int potencia(int a, int b)
{
	if(b==0) return 1;
	if(b==1) return a;
	return a*potencia(a,b-1);
}

int fatorial(int n)
{
	if(n==1||n==0) return 1;
	else return n*fatorial(n-1);
}

int fibonacci(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

int impressorimpar(int n)
{
	if(n<1) return 1;
	if(n%2==0)
		n=n-1;
	printf("%d\t",n);
	return impressorimpar(n-2);	 
}

int produtosPares(int n)
{
	int nAux;
	{
		if(n==1) return 1;
		if(n%2!=0)
			n=n-1;	
		return n*produtosPares(n-1);
	}	
}
