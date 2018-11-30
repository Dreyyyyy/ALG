/*
7)
Elabore um algoritmo que efetue a leitura do nome e do sexo de uma pessoa, 
apresentando como saída uma das seguintes mensagens: “Ilmo Sr.”, para o sexo 
informado como masculino, ou a mensagem “Ilma Sra.”, para os sexo informado como 
feminino.Apresente também abaixo da mensagem impressa o nome da pessoa.
*/

#include <stdio.h>

int main()
{
	char nome[20];
	char sexo;
	
	printf("Digite seu primeiro nome:\n");
	scanf("%s",nome);
	
	printf("Digite seu sexo, sendo M para masculino ou F para feminino:\n");
	scanf("%c",&sexo);
	
	if(sexo=='M'||'m')
	{
		printf("Ilmo Sr. %s.",nome);
	}
	else
	{
		printf("Ilma Sra. %s.",nome);
	}
	
	return 0;
	
}
