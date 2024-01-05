/*Faça um programa que leia dois números inteiros n e m e imprima um retângulo formado por 
asteriscos com altura n e largura m. Ex: n = 3, m = 7 
*******
*******
*******
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, m, contN=1;

    printf("n: ");
    scanf("%i", &n);
    printf("m: ");
    scanf("%i", &m);
    printf("\n");

    while(contN <= n){
        int contM=1;
        while(contM <= m){
            printf("*");
            contM++; 
        }
        printf("\n"); 
        contN++;
    }

    system("pause");
}