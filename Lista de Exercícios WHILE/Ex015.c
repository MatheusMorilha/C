/*Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de um banco
e retorne quantas notas de cada valor serão necessárias para atender 
ao saque com a menor quantidade de notas possível. 
Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real. */

#include<stdio.h>
#include<stdlib.h>

int main (){
    float saque;

    printf("Informe o valor do saque: ");
    scanf("%f", &saque);
    printf("\n");
    
        while(saque >= 100) {
        printf("Nota de R$ 100,00\n");
        saque = saque - 100;
        }
        while(saque >=50) {
            printf("Nota de R$ 50,00\n");
            saque = saque - 50;
        }
        while(saque >= 20) {
            printf("Nota de R$ 20,00\n");
            saque = saque - 20;
        }
        while(saque >= 10) {
            printf("Nota de R$ 10,00\n");
            saque = saque - 10;
        }
        while(saque >= 5) {
            printf("Nota de R$ 5,00\n");
            saque = saque - 5;
        }

        while(saque >= 2){
            printf("Nota de R$ 2,00\n");
            saque = saque - 2;
        }

         while(saque >= 1){
            printf("Nota de R$ 1,00\n");
            saque = saque - 1;
        }

    system("pause");
}   