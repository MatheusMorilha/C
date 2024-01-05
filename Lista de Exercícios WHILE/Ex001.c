/*Mostrar na tela nos números pares de 1 a 50.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int contador = 1;

    while(contador <= 50){
        if(contador % 2 == 0){
            printf("%i ", contador);
        }
    contador++;

    }

    system("pause");
}