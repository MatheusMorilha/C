#include<stdio.h>
#include<stdlib.h>

int main () {
    int x, soma=0;

    printf("CONTAGEM DE VALORES\n\n");
    printf("Digite 10 numeros para serem somados\n");
    printf("digite 0 para realizar a soma\n\n");

    x = 1;

    while (x!=0) {
        printf("Digite um valor\n");
        scanf("%i", &x);
        soma = soma + x;

    }
        printf("\nA soma dos numeros e igual a %i\n", soma);














}
