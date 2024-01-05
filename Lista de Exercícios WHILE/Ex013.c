/*Faça um programa que leia um número inteiro N e depois imprima os
N primeiros números naturais ímpares.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, cont=0, x=0;

    printf("Informe o valor de n: ");
    scanf("%i", &n);

    x = n;

    while(n > 0){
        if(n % 2 != 0){
            printf("%i ", n);
            cont++;
        }

        if(cont == x){
            break;
        }

        n++;

    }

    printf("\n\n");
    system("pause");
}