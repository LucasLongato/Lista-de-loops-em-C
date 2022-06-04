/*
 ============================================================================
 Name        : 1-lista.c
 Author      : Lucas Henrique Longato Rodrigues
 Version     :
 Copyright   : Your copyright notice
 Description :Fa�a um jogo de adivinha��o em que programa sorteia um n�mero inteiro positivo de
 0 a 100 e o jogador tem 10 tentativas (vidas) para acertar. Em cada tentativa, l� o n�mero digitado pelo jogador +
 e mostra uma dica. Essa dica consiste em informar se o n�mero digitado � maior ou menor que o n�mero sorteado. Caso
 o jogador acerte, o jogo termina informando que o jogador venceu, caso as vidas acabem, o jogo termina informando que
 o jogador perdeu. O programa deve validar o n�mero digitado pois o valor precisa ser entre 0 e 100.
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
