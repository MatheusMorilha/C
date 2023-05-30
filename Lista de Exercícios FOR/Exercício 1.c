#include<stdio.h>
#include<stdlib.h>
///1. Solicitar ao usuário que escolha um número para que seja exibida a sua tabuada na tela.
int main () {
    int i, x, multiplicador, resultado;

    printf("Tabuada - Informe um numero de 1 a 10: ");
    scanf("%i", &x);

    multiplicador=0;

    for (i=0; i<10; i++) {
        multiplicador++;
        resultado = x * multiplicador;
        printf("%i x %i = %i\n", x, multiplicador, resultado);
    }




}
