/*Faça um programa que leia um número n e mostre na tela os n primeiros números
pares e depois os n primeiros números ímpares. */

#include<stdio.h>
#include<stdlib.h>

int main () {
    int n, i;

    printf("Informe um numero: ");
    scanf("%i", &n);

    for(i=0; i<n; i++){
        if(i % 2 == 0){
            printf("%i ", i);
        }
    }

    printf("\n");

    for(i=0; i<n; i++){
        if(i % 2 == 1){
            printf("%i ", i);
        }
    }
}