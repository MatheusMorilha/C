/*Para doar sangue é necessário ter idade entre 18 e 67 anos e peso superior a 50 Kg.
Faça um programa que pergunte a idade e peso de uma pessoa e diga se ela pode doar
sangue ou não.*/

#include<stdio.h>
#include<stdlib.h>


int main () {
    int idade;
    float peso;

    printf("Qual a sua idade: ");
    scanf("%i", &idade);
    printf("\nQual e o seu peso: ");
    scanf("%f", &peso);

    if(idade >= 18 && idade <=67){
        if(peso > 50){
            printf("\nVoce pode doar sangue!");
        }else{
            printf("\nVoce nao possui o peso minimo suficiente");
        }
    }else{
        printf("\nSua idade nao se encaixa para doacao");
    }



}