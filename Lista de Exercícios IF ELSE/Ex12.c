/*Faça um programa que leia os lados de um triângulo retângulo e exiba sua hipotenusa
se e a hipotenusa for maior que 100 apresente na tela, “hipotenusa excede o tamanho
permitido para área”, caso contrário exiba “hipotenusa aceita”.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    float a, b, c;

    printf("Informe o lado A: ");
    scanf("%f", &a);
    printf("\nInforme o lado B: ");
    scanf("%f", &b);
   
    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    if(c != 0){
        if(c > 100){
            printf("\nHipotenusa excede o tamanho permitido para a area\n\n");
            printf("\nHipotenusa: %.2f\n\n", c);
        }else{
            printf("\nHipotenusa aceita\n\n");
            printf("\nHipotenusa: %.2f\n\n", c);
        }
    }else{
         printf("\nA hipotenusa e igual a ZERO\n\n");
    }



}