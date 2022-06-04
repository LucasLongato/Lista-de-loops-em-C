/*
 ============================================================================
 Name        : 3-lista.c
 Author      : Lucas Henrique Longato Rodrigues,  Mateus Henrique Fontoura Camargo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c1, c2, c3;
    b = 0;
    c1 = 0;
    c2 = 1;
    printf("informe o numero: ");
    scanf("%d", &a);
    if (a != 0 && a != 1){
        while (b <= a){
        c3 = c1 + c2;
        c1 = c2;
        c2 = c3;
        b = b + 1;
    }} else {
        if (a == 0) {
            printf("\nn-ésimo: %d", c1);
        } else {
            printf("\nn-ésimo: %d", c2);
        }
    }
    if (a != 0 && a != 1){
        printf("\nn-ésimo: %d", c3);
}}
