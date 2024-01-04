/*Criar um programa que leia um número que será o limite superior de um intervalo
e imprimir todos os números impares menores que esse número.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int limite, i;

    printf("Informe o numero limite: ");
    scanf("%i", &limite);

    for(i=0; i<limite; i++){
        if(i % 2 == 1){
            printf("%i ", i);
        }
    }

    system("pause");
}