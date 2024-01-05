/* Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, 
considerando números maiores que 0.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int cont=1, x=0;

    while(cont > 0){
        if(cont % 3 == 0){
            printf("%i ", cont);
            x++;
        }if(x == 5){
            break;
        }

        cont++;
    }

    printf("\n\n");
    system("pause");
}