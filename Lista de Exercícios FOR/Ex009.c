/*Percorrer os números de 1 a 999 e escrever aqueles que divididos por 11 dão um
resto igual a 5.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int i;

    for(i=0; i<=999; i++){
       if(i % 11 == 5){
            printf("%i ", i);
       }  
    }
}