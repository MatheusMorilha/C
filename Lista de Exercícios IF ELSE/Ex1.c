/*1. Fa�a um programa que receba um n�mero e identifique se ele � positivo ou negativo. Se
positivo apresente o triplo deste numero, se negativo apresente ele elevado ao quadrado.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main () {
    setlocale(LC_ALL,"Portuguese_Brazil");

    float numero;

    printf("Informe um n�mero: ");
    scanf("%f", &numero);

    if(numero > 0){
        printf("\nN�mero digitado: %.2f", numero);
        numero = numero * 3;
        printf("\nTriplo do N�mero: %.2f", numero);
    }else if(numero < 0){
        printf("\nN�mero digitado: %.2f", numero);
        numero = pow(numero, 2);
        printf("\nElevado ao quadrado: %.2f", numero);
    }

    printf("\n\n"); 
    system("pause");
   

}