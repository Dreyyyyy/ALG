/*
9)Faça um algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de 
minutos se passaram desde o início do dia (0:00h).
*/

#include <stdio.h>

void minutosPassados(int horas,int minutos)
{
	int horConvertidosmin,horasEmin;
	horConvertidosmin=horas*60;
	horasEmin=horConvertidosmin+minutos;
	printf("Um dia possui 24h, ou seja, 1440 minutos, portando desde o inicio do dia(0:00h)se passaram exatos %d minutos, com base em sua hora informada.\n",horasEmin);
}

int main()
{
	int horas,minutos;
	printf("Digite um valor de horas e minutos de um dia, sequencialmente e com espaços: ");
	scanf("%d%d",&horas,&minutos);
	while(horas>24||horas<0)
	{
		printf("As horas informadas são inválidas! digite novamente, apenas as horas que deseja informar: ");
		scanf("%d",&horas);
	}
	while(minutos>60||minutos<0)
	{
		printf("Os minutos informados são inválidos! digite novamente, apenas os minutos que deseja informar: ");
		scanf("%d",&minutos);
	}
	minutosPassados(horas,minutos);
	return 0;
}

