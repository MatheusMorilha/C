/*Criar um programa que leia os limites inferior e superior e apresentar na tela todos
os números naturais presentes no intervalo.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int limiteInf, limiteSup, i;

    printf("Informe um numero: ");
    scanf("%i", &limiteInf);
    printf("Informe um numero: ");
    scanf("%i", &limiteSup);

    limiteInf++;

    for(i=limiteInf; i<limiteSup; i++){
        printf("%i ", i);
    }

    system("pause");
}