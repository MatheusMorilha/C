/*. Escrever um programa que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, i, fat=1;
    int e;

    printf("Digite um numero: ");
    scanf("%i", &n);

    if(n != 0){
        for(i=0; i<n; i++){
           fat = fat * i;
        }
    }else{
        printf("\nValor ZERO invalido\n\n");
    }

    e = 1 + (1 / 1) + (1 / 2) + (1 / 6) + 1;
    e = e / fat;

    printf("E = %i\n\n", e);

    system("pause");

}