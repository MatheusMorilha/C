/*1. Faça um programa que receba um número e identifique se ele é positivo ou negativo. Se
positivo apresente o triplo deste numero, se negativo apresente ele elevado ao quadrado.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main () {
    setlocale(LC_ALL,"Portuguese_Brazil");

    float numero;

    printf("Informe um número: ");
    scanf("%f", &numero);

    if(numero > 0){
        printf("\nNúmero digitado: %.2f", numero);
        numero = numero * 3;
        printf("\nTriplo do Número: %.2f", numero);
    }else if(numero < 0){
        printf("\nNúmero digitado: %.2f", numero);
        numero = pow(numero, 2);
        printf("\nElevado ao quadrado: %.2f", numero);
    }

    printf("\n\n"); 
    system("pause");
   

}