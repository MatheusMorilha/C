#include<stdio.h>
#include<stdlib.h>

int main () {
    int numero, primo;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    if (numero > 1){
        if (numero == 2){
            printf("\nPRIMO\n\n");
    }    if (numero % 2 != 0){
            printf("\nPRIMO\n\n");
    }
        else if (numero % 2 == 0 && numero != 2){
            printf("\nNao e primo\n\n");
        }
    }
        system("pause");










}
