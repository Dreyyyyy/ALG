/*
10) Construa um programa que seja capaz de concluir qual dentre os seguintes 
animais foi escolhido através de perguntas e respostas. Animais possíveis: leão, 
cavalo, homem, macaco avestruz pingüim e pato.
*/

#include <stdio.h>

int main()
{
	
	char resp1,resp2m,resp3m,resp4m,resp5m,resp2n,resp3n;
	
	printf("Digite 's' para sim e 'n' para não no questionário a seguir:\n");
	printf("O animal, quando recém nascido, se alimenta do leite materno produzido pela fêmea?\n");
	scanf("%c",&resp1);
	
	switch(resp1)
	{
		case 's':
		{
			printf("O animal é quadrúpede ou bípede?Se quadrúpede digite q, se bípede digite b:\n");
			scanf(" %c",&resp2m);
			
			switch(resp2m)
			{
				case 'q':
				{
					printf("O animal é carnívoro ou herbívoro?Digite c para carnívoro e h para herbívoro:\n");
					scanf(" %c",&resp4m);
					
					switch(resp4m)
					{
						case 'c':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'C':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'h':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}
						case 'H':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}	
					}
				}break;
				case 'Q':
				{
					printf("O animal é carnívoro ou herbívoro?Digite c para carnívoro e h para herbívoro:\n");
					scanf(" %c",&resp4m);
					
					switch(resp4m)
					{
						case 'c':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'C':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'h':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}
						case 'H':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}	
					}
				}break;
				case 'b':
				{
					printf("O animal é onívoro ou frutífero?Digite o para onívoro e f para frutífero:\n");
					scanf(" %c",&resp5m);
					
					switch(resp5m)
					{
						case 'o':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'O':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'f':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
						case 'F':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
					}
				}break;
				case 'B':
				{
					printf("O animal é onívoro ou frutífero?Digite o para onívoro e f para frutífero:\n");
					scanf(" %c",&resp5m);
					
					switch(resp5m)
					{
						case 'o':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'O':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'f':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
						case 'F':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
					}
				}break;
			}break;
			
		}
		case 'S':
		{
			printf("O animal é quadrúpede ou bípede?Se quadrúpede digite q, se bípede digite b:\n");
			scanf(" %c",&resp2m);
			
			switch(resp2m)
			{
				case 'q':
				{
					printf("O animal é carnívoro ou herbívoro?Digite c para carnívoro e h para herbívoro:\n");
					scanf(" %c",&resp4m);
					
					switch(resp4m)
					{
						case 'c':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'C':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'h':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}
						case 'H':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}	
					}
				}break;
				case 'Q':
				{
					printf("O animal é carnívoro ou herbívoro?Digite c para carnívoro e h para herbívoro:\n");
					scanf(" %c",&resp4m);
					
					switch(resp4m)
					{
						case 'c':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'C':
						{
							printf("O animal em questão é o Leão!\n");break;
						}
						case 'h':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}
						case 'H':
						{
							printf("O animal em questão é o Cavalo!\n");break;
						}	
					}
				}break;
				case 'b':
				{
					printf("O animal é onívoro ou frutífero?Digite o para onívoro e f para frutífero:\n");
					scanf(" %c",&resp5m);
					
					switch(resp5m)
					{
						case 'o':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'O':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'f':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
						case 'F':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
					}
				}break;
				case 'B':
				{
					printf("O animal é onívoro ou frutífero?Digite o para onívoro e f para frutífero:\n");
					scanf(" %c",&resp5m);
					
					switch(resp5m)
					{
						case 'o':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'O':
						{
							printf("O animal em questão é o Homem!\n");break;
						}
						case 'f':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
						case 'F':
						{
							printf("O animal em questão é o Macaco!\n");break;
						}
					}
				}break;
			}break;
			
		}
		case 'n':
		{
			printf("Este animal é não-voador ou aquático?Digite v para não-voador e a para aquático:\n");
			scanf(" %c",&resp2n);
			
			switch(resp2n)
			{
				case 'v':
				{
					printf("Este animal é de clima tropical ou polar?Digite t para tropical e p para polar:\n");
					scanf(" %c",&resp3n);
					
					switch(resp3n)
					{
						case 't':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'T':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'p':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}
						case 'P':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}	
					}	
				}break;
				case 'V':
				{
					printf("Este animal é de clima tropical ou polar?Digite t para tropical e p para polar:\n");
					scanf(" %c",&resp3n);
					
					switch(resp3n)
					{
						case 't':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'T':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'p':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}
						case 'P':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}	
					}	
				}break;
				case 'a':
				{
					printf("Este animal é o Pato!\n");break;
				}
				case 'A':
				{
					printf("Este animal é o Pato!\n");break;
				}
			}break;
		}
		case 'N':
		{
			printf("Este animal é não-voador ou aquático?Digite v para não-voador e a para aquático:\n");
			scanf(" %c",&resp2n);
			
			switch(resp2n)
			{
				case 'v':
				{
					printf("Este animal é de clima tropical ou polar?Digite t para tropical e p para polar:\n");
					scanf(" %c",&resp3n);
					
					switch(resp3n)
					{
						case 't':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'T':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'p':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}
						case 'P':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}	
					}	
				}break;
				case 'V':
				{
					printf("Este animal é de clima tropical ou polar?Digite t para tropical e p para polar:\n");
					scanf(" %c",&resp3n);
					
					switch(resp3n)
					{
						case 't':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'T':
						{
							printf("O animal em questão é o Avestruz!\n");break;
						}
						case 'p':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}
						case 'P':
						{
							printf("O animal em questão é o Pinguim!\n");break;
						}	
					}	
				}break;
				case 'a':
				{
					printf("Este animal é o Pato!\n");break;
				}
				case 'A':
				{
					printf("Este animal é o Pato!\n");break;
				}
			}break;
		}	
		
	}
	
	
	return 0;
	
}
