/*Faça um programa que receba um número inteiro maior do que 1, e verifique se o número fornecido é primo ou não. */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if(num > 0){
        if(num == 2){
            printf("\nPRIMO\n\n");
        }if(num % 2 !=0 && num != 1){
            printf("\nPRIMO\n\n");
        }else if(num % 2 == 0 && num != 2){
            printf("\nNAO PRIMO\n\n");
        }else{
            printf("\nNAO PRIMO\n\n");
        }
    }

    system("pause");
}