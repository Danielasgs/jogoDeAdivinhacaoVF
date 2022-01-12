#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) {
	//armazena o numero secreto do jogo;
	int numero = 10;
	//armazena o valor digitado pelo usuario
	int palpite;
	//armazena a dificuldade escolhida
	int dif;
	//armazena a quantidade de tentativas
	int vezes = 1;
	//inicia o jogo
	int go;
	//armazena o total de pontos
	int totalPontos = 3000;
	//armazena o numero de inicio
	int numInicial;
	//armazena o numero de finalização
	int numFinal;
	printf("*************************\n");
	printf("*  JOGO DE ADIVINHAÇÃO  *\n");
	printf("*************************\n\n");
	printf("Iniciar? (1)Sim || (2)Não \n");
	printf("Resposta: ");
	scanf("%d", &go);
	
	while (go == 1){
		printf("\nSerá gerado um número aleatório entre os números de sua escolha!\nTente adivinha-lo!\n\n");
		printf("Qual a dificuldade??\n");
		printf("(1) Fácil (20 tentativas)\n");
		printf("(2) Média (15 tentativas)\n");
		printf("(3) Difícil (6 tentativas)\n");
		printf("Sua escolha: ");
		scanf("%d", &dif);
		switch(dif){
			case 1:
				srand(time(0));
				printf("\n----------------------\n");
				printf("\nQual o número inicial? Resposta:");
				scanf("%d", &numInicial);
				printf("\n----------------------\n");
				printf("\nQual o número final? Resposta:");
				scanf("%d", &numFinal);
				printf("\n----------------------\n");
				numero = (rand() % (numFinal - numInicial + 1)) + numInicial;
				while(numFinal <= numInicial){
					printf("----------------------\n\n");
					printf("\nSeu número final precisa ser maior que seu número inicial!!\n");
					printf("----------------------\n\n");
					srand(time(0));
					printf("\n----------------------\n");
					printf("\nQual o número inicial? Resposta:");
					scanf("%d", &numInicial);
					printf("\n----------------------\n");
					printf("\nQual o número final? Resposta:");
					scanf("%d", &numFinal);
					printf("\n----------------------\n");
					numero = (rand() % (numFinal - numInicial + 1)) + numInicial;
				}
				printf("----------------------\n\n");
				printf("Seu número foi gerado!\n\n");
				printf("----------------------\n\n");
				do{
					printf("----------------------\n");
					printf("Tentativa %d de 20", vezes);
					printf("\nDigite o seu palpite: ");
					scanf("%d", &palpite);
					if(numero == palpite){
						printf("\nParabéns você acertou o némero secreto!!\n");
						if(vezes == 1){
							totalPontos = totalPontos + 3000;
							printf("\nParabéns!! Por acertar na primeira tentativa você ganhou o bônus de 3000 pontos!!\n");
						}
						printf("Sua pontuação total foi de %d pontos!!\n", totalPontos);
						break;
					}else if(numero < palpite){
						printf("\nO número secreto é menor do que o seu palpite!\n");
						totalPontos = totalPontos - 150;
					}else{
						printf("\nO número secreto é maior do que o seu palpite!\n");
						totalPontos = totalPontos - 150;
					}
					vezes++;
				}while(vezes <= 20);
				printf("Game over!\n");
				break;
			case 2:
				srand(time(0));
				printf("\n----------------------\n");
				printf("\nQual o número inicial? Resposta:");
				scanf("%d", &numInicial);
				printf("\n----------------------\n");
				printf("\nQual o número final? Resposta:");
				scanf("%d", &numFinal);
				printf("\n----------------------\n");
				numero = (rand() % (numFinal - numInicial + 1)) + numInicial;
				while(numFinal <= numInicial){
					printf("----------------------\n\n");
					printf("\nSeu número final precisa ser maior que seu número inicial!!\n");
					printf("----------------------\n\n");
					srand(time(0));
					printf("\n----------------------\n");
					printf("\nQual o número inicial? Resposta:");
					scanf("%d", &numInicial);
					printf("\n----------------------\n");
					printf("\nQual o número final? Resposta:");
					scanf("%d", &numFinal);
					printf("\n----------------------\n");
					numero = (rand() % (numFinal - numInicial + 1)) + numInicial;
				}
				printf("----------------------\n\n");
				printf("Seu número foi gerado!\n\n");
				printf("----------------------\n\n");
				do{
					printf("----------------------\n");
					printf("Tentativa %d de 15\n", vezes);
					printf("\nDigite o seu palpite: ");
					scanf("%d", &palpite);
					if(numero == palpite){
						printf("\nParabéns você acertou o número secreto!!\n");
						if(vezes == 1){
							totalPontos = totalPontos + 3000;
							printf("\nParabéns!! Por acertar na primeira tentativa você ganhou o bônus de 3000 pontos!!\n");
						}
						printf("Sua pontuação total foi de %d pontos!!\n", totalPontos);
						break;
					}else if(numero < palpite){
						printf("\nO número secreto é menor do que o seu palpite!\n");
						totalPontos = totalPontos - 200;
					}else{
						printf("\nO número secreto é maior do que o seu palpite!\n");
						totalPontos = totalPontos - 200;
					}
					vezes++;
				}while(vezes <= 15);
				printf("Game over!\n");
				break;
			case 3:
				srand(time(0));
				printf("\n----------------------\n");
				printf("\nQual o número inicial? Resposta:");
				scanf("%d", &numInicial);
				printf("\n----------------------\n");
				printf("\nQual o número final? Resposta:");
				scanf("%d", &numFinal);
				printf("\n----------------------\n");
				numero = (rand() % (numFinal - numInicial + 1)) + numInicial;
				while(numFinal <= numInicial){
					printf("----------------------\n\n");
					printf("\nSeu número final precisa ser maior que seu número inicial!!\n");
					printf("----------------------\n\n");
					srand(time(0));
					printf("\n----------------------\n");
					printf("\nQual o número inicial? Resposta:");
					scanf("%d", &numInicial);
					printf("\n----------------------\n");
					printf("\nQual o número final? Resposta:");
					scanf("%d", &numFinal);
					printf("\n----------------------\n");
					numero = (rand() % (numFinal - numInicial + 1)) + numInicial;
				}
				printf("----------------------\n\n");
				printf("Seu número foi gerado!\n\n");
				printf("----------------------\n\n");
				do{
					printf("----------------------\n");
					printf("tentativa %d de 6\n", vezes);
					printf("\nDigite o seu palpite: ");
					scanf("%d", &palpite);
					if(numero == palpite){
						printf("\nParabéns você acertou o némero secreto!!\n");
						if(vezes == 1){
							totalPontos = totalPontos + 3000;
							printf("\nParabéns!! Por acertar na primeira tentativa você ganhou o bônus de 3000 pontos!!\n");
						}
						printf("Sua pontuação total foi de %d pontos!!\n", totalPontos);
						break;
					}else if(numero < palpite){
						printf("\nO número secreto é menor do que o seu palpite!\n");
						totalPontos = totalPontos - 500;
					}else{
						printf("\nO número secreto é maior do que o seu palpite!\n");
						totalPontos = totalPontos - 500;
					}
					vezes++;
				}while(vezes <= 6);
				printf("Game over!\n");
				break;
			default:
				printf("Escolha inválida!");
				break;
		}
		vezes = 1;
		totalPontos = 3000;
		printf("\nJogar novamente? (1)Sim || (2)Não \n");
		printf("Resposta: ");
		scanf("%d", &go);
	}		
	printf("\nBye Bye!");
}