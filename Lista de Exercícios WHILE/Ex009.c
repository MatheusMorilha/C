/*Faça um programa que leia a renda mensal de uma pessoa e calcule quanto ela tem que pagar de imposto de renda. 
Este imposto é cobrado como uma porcentagem da renda da pessoa de acordo com a tabela abaixo. 
O programa deve dar a possibilidade de várias consultas conforme opção do usuário. 
Renda mensal  / Alíquota Até R$1637.11 Isento De R$1637.12 até R$2453.50 7.5% De R$2453.51 até R$3271.38 15.0% De R$3271.39 até R$4087.65 22.5% 
A partir de R$4087.66 27.5% */

#include<stdio.h>
#include<stdlib.h>

int main () {
    float renda = 1, aPagar;

    while(renda != 0){
        printf("Digite '0' para encerrar o programa\n");
        printf("Informe a renda mensal: ");
        scanf("%f", &renda);

        if(renda > 0 && renda <= 1637.11){
            printf("\nISENTO\n\n");
        }else if(renda >= 1637.12 && renda <= 2453.50){
            aPagar = (renda * 7.5)/100;
            printf("\nTotal a pagar: %.2f\n\n", aPagar);
        }else if(renda >= 2453.51 && renda <= 3271.38){
            aPagar = (renda * 15)/100;
            printf("\nTotal a pagar: %.2f\n\n", aPagar);
        }else if(renda >= 3271.39 && renda <= 4087.65){
            aPagar = (renda * 22.5)/100;
            printf("\nTotal a pagar: %.2f\n\n", aPagar);
        }else if(renda >= 4087.66){
            aPagar = (renda * 27.5)/100;
            printf("\nTotal a pagar: %.2f\n\n", aPagar);
        }
    }
}