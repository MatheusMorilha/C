#include<stdio.h>
#include<stdlib.h>

/** 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada
um deles. Associe as vari�veis aos ponteiros (use &). Modifique os valores de cada
vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a
modifica��o. **/


int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrCaractere = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificando os valores usando os ponteiros
    *ptrInteiro = 20;
    *ptrReal = 2.71;
    *ptrCaractere = 'B';

    printf("\nValores apos modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
