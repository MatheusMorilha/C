/*Entrar com um número e imprimir todos os seus divisores*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int num, i;

    printf("Informe um numero: ");
    scanf("%i", &num);

    for(i=num; i>0; i--){
        if(num % i == 0){
            printf("%i ", i);
        }
    }
}