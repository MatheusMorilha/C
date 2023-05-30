#include<stdio.h>
#include<stdlib.h>

int main () {
    int valor, soma=0, contadornegativo=0;

    printf("Informe os valores a serem somados\n");
    printf("0 - para Sair\n\n");

    valor = 1;

    while (valor != 0) {
        if (valor > 0){
        printf("Informe valor\n");
        scanf("%i", &valor);

        soma = soma + valor;

        }else if (valor <0 && valor != 0){
        contadornegativo++;
        printf("Informe valor\n");
        scanf("%i", &valor);


        }
    }
        printf("A soma dos valores e %i\n", soma);
        printf("\nQuantidade de numeros negativos igual a: %i\n\n", contadornegativo);
        system("pause");

}
