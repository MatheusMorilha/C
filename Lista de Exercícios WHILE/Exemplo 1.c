#include<stdio.h>
#include<stdlib.h>

int main () {
    int valor, soma=0;

    printf("Informe os valores a serem somados\n");
    printf("0 - para Sair\n\n");

    valor = 1;

    while (valor != 0) {
        printf("Informe valor\n");
        scanf("%i", &valor);

        soma = soma + valor;
    }
        printf("A soma dos valores e %i\n", soma);
        system("pause");


}
