/*Escreva um programa que identifique se um número é par ou impar. Se par apresentar
a sua raiz quadrada, se impar apresentar sua metade. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int numero;
    float raiz=0, metade=0;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if(numero !=0){
        if(numero % 2 == 0){
            printf("\nPAR");
            printf("\nNumero: %i", numero);
            raiz = pow(numero, 2);
            printf("\nRaiz: %f", raiz);
        }else{
            printf("\nIMPAR");
            printf("\nNumero: %i", numero);
            metade = numero/2 + 0.5;
            printf("\nMetade: %.2f", metade);
        }
    }else{
        printf("\nO numero e ZERO");
    }
}