/*Escreva um programa que leia 10 números e escreva o maior valor lido*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int cont=1;
    float num, maior=0;

    printf("Informe 10 numeros\n\n");

    while(cont <= 10){
        printf("Digite um numero: ");
        scanf("%f", &num); 
        if(num > maior){
            maior = num;
        }
        cont++;
    }

    printf("\n\nO maior numero e o: %.2f\n\n", maior);

    system("pause");
}