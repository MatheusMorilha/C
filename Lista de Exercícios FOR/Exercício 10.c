#include<stdio.h>
#include<stdlib.h>

int main () {
    int i, x;

    printf("Digite um numero: ");
    scanf("%i", &x);

    for (i=1; i<x; i++){
        if (x%i==0){
            printf("%i\n", i);
        }
    }



}
