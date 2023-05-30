#include<stdio.h>
#include<stdlib.h>

int main () {
    int x, soma, termos, numero;

    printf("Esses sao os numeros impares multiplos de 3 de 1 ate 500:\n\n");
    x=3;
    while (x<501){
        printf(" %i, ", x);
        x = x + 3;


    }
        termos = 3 + (498-1)*3;
        soma = (3+498) * (termos/2);
        printf("A soma dos termos e igual a: %i", soma);

        printf("\n\n");
        system("pause");



}
