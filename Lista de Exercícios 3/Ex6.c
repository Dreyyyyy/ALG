/*
6) Perguntar ao usuário se ele deseja calcular:
a) a área de um triângulo
b) a área de um circulo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na 
tela.
*/

#include <stdio.h>
#include <math.h>

int main()
{

	int resposta;
	float larg,alt,area,raio,raiopow,aresta;
	
	printf("1-área do triângulo.\n");
	printf("2-área de um circulo.\n");
	printf("3-área de um cubo.\n");
	printf("4-área de um cilindro.\n");
	printf("Digite um dos números listados acima, correspondente com a opção de área que deseja calcular:\n");
	scanf("%d",&resposta);
	
	switch(resposta)
	{
		case 1:
		{
			printf("Informe a largura do triângulo que você deseja calcular a área:\n");
			scanf("%f",&larg);
			printf("Informe a altura do triângulo que você deseja calcular a área:\n");
			scanf("%f",&alt);
			area=(larg*alt)/2;
			printf("A área do seu triângulo é de %.2f.\n",area);break;
		}
		case 2:
		{
			printf("Informe o raio do círculo que você deseja calcular a área:\n");
			scanf("%f",&raio);
			raiopow=pow(raio,2);
			area=raiopow*3.14;
			printf("A área do seu círculo é de %.2f.\n",area);break;
		}
		case 3:
		{
			printf("Informe a medida da aresta de seu cubo que deseja calcular a área total:\n");
			scanf("%f",&aresta);
			area=6*pow(aresta,2);
			printf("A área total do seu cubo é de %.2f.\n",area);break;
		}
		case 4:
		{
			printf("Informe o raio da base de seu cilíndro:\n");
			scanf("%f",&raio);
			printf("Informe a altura de seu cilíndro:\n");
			scanf("%f",&alt);
			area=2*3.14*raio*(alt+raio);
			printf("A área total do seu cilíndro é de %.2f.\n",area);break;
		}
		default:
		{
			printf("Opção Inexistente!\n");break;
		}
		
		return 0;
		
	}
}
