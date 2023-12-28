/*Faça um programa que solicite ao usuário três números e os apresente na tela em ordem
crescente.*/


#include<stdio.h>
#include<stdlib.h>

int main () {
    float n1, n2, n3;

    printf("Informe um numero: ");
    scanf("%f", &n1);
    printf("Informe um numero: ");
    scanf("%f", &n2);
    printf("Informe um numero: ");
    scanf("%f", &n3);

    printf("\n\n");

    if(n1<=n2 && n1<n3){
        if(n2<n3){
            printf("\n%.2f", n1);
            printf("\n%.2f", n2);
            printf("\n%.2f", n3);
        }else{
            printf("\n%.2f", n1);
            printf("\n%.2f", n3);
            printf("\n%.2f", n2);
        }
    }else if(n2<=n1 && n2<=n3){
        if(n1<n3){
            printf("\n%.2f", n2);
            printf("\n%.2f", n1);
            printf("\n%.2f", n3);
        }else{
            printf("\n%.2f", n2);
            printf("\n%.2f", n3);
            printf("\n%.2f", n1);
        }
    }else if(n3<=n1 && n3<=n2){
        if(n1<n2){
            printf("\n%.2f", n3);
            printf("\n%.2f", n1);
            printf("\n%.2f", n2);
        }else{
            printf("\n%.2f", n3);
            printf("\n%.2f", n2);
            printf("\n%.2f", n1);
        }
    }
    
    

    printf("\n\n");







}