/*
 ============================================================================
 Name        : 2-lista.c
 Author      : Lucas Henrique Longato Rodrigues,  Mateus Henrique Fontoura Camargo
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,contador,fatorial;

  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um inteiro nao-negativo: ");
  scanf("%d", &n);
  fatorial = 1;
  contador = 2;

  while (contador <= n) {
    fatorial = fatorial * contador;
    contador = contador + 1;
  }
  printf("O valor de %d!: %d\n", n, fatorial);

  return 0;
}
