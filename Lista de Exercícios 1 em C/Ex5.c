/*5.Dois amigos jogam na loteria toda semana. Escreva um programa que solicite a 
quantia com que cada um participou e o valor do prêmio a ser rateado em 
partes diretamente proporcionais às quantias de cada um deles. 
O  programa deve imprimir quanto cada um dos amigos receberá caso sejam ganhadores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float quantia1,quantia2,vtotal,porc1,porc2;
	printf("Informe a quantia do jogador 1:");
	scanf("%f",&quantia1);
	printf("Informe a quantia do jogador 2:");
	scanf("%f",&quantia2);
	vtotal=quantia1+quantia2;
	porc1=(quantia1/vtotal)*100;
	porc2=(quantia2/vtotal)*100;
	printf("O jogador 1 tem a porcentagem de:%.2f e o jogador 2 tem a porcentagem de:%.2f",porc1,porc2);
	
	return 0;
	}
