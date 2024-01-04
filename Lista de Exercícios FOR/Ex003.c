/*Escreva um programa que solicita 10 números ao usuário, e ao final mostre o
maior número digitado pelo usuário. */

#include<stdio.h>
#include<stdlib.h>

int main () {
    int numero, i, maior = 0;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%i", &numero);

        if(numero > maior){
            maior = numero;
        }
    }

    printf("\nO maior numero digitado e: %i", maior);

    system("pause");
}