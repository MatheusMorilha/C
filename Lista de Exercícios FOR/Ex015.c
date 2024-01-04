/*Faça um programa em C que calcula e escreve a seguinte soma:
soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int i;
    float divisao, soma=0, j=1;
    
    for(i=1; i<=99; i++){
        divisao = i / j;
        soma = soma + divisao;
        i++;
        j++;
    }

    printf("\nSoma: %.2f\n\n", soma);

    system("pause");

    
}