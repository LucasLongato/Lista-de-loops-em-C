/*
 ============================================================================
 Name        : 4-lista.c
 Author      : Lucas Henrique Longato Rodrigues,  Mateus Henrique Fontoura Camargo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int y;
	float x, r;
	x = 0;
	while (x < 100){
		y = -100;
		while (-100 <= y && y <= 0){
			r = (x*x)+(y*y);
			printf("f(%f, %d) = %f\n", x, y, r);
			y = y+5;
		}
		printf("\n");
		x = x+2,5;
	}
return EXIT_SUCCESS;
}
