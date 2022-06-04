/*
 ============================================================================
 Name        : 1-lista.c
 Author      : Lucas Henrique Longato Rodrigues
 Version     :
 Copyright   : Your copyright notice
 Description :Faça um jogo de adivinhação em que programa sorteia um número inteiro positivo de
 0 a 100 e o jogador tem 10 tentativas (vidas) para acertar. Em cada tentativa, lê o número digitado pelo jogador +
 e mostra uma dica. Essa dica consiste em informar se o número digitado é maior ou menor que o número sorteado. Caso
 o jogador acerte, o jogo termina informando que o jogador venceu, caso as vidas acabem, o jogo termina informando que
 o jogador perdeu. O programa deve validar o número digitado pois o valor precisa ser entre 0 e 100.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, c, r;
	srand(time(0));
	c = 0;
	n = rand() % 101;
	printf("acerte o numero de 0 a 100");
	while (c <= 10) {
		scanf("%d", &r);
		if (r == n) {
			printf("voce venceu!!!");
			c = 15;
		}
		if (r < n) {
			printf("numero menor que o sorteado");
		}
		if (r > n) {
			printf("numero maior que o sorteado");
		}
		c = c + 1;
	}
	if (c < 15) {
		printf("voce perdeu...");
	}
	return EXIT_SUCCESS;
}
