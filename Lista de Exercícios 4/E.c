#include <stdio.h>
#include <stlib.h>

int main()
{

	
	float a=1,b=1,resp=0;

	for(int i=0;i<2;i++)
	{
	
		resp+=(a/b)-(a+2/b+1);
		a+=4;
		b+=2;
	}
	
	printf("O somatório resultará em: %.2f",resp);
	
	return 0;
}
