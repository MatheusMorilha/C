/*Fazer um algoritmo que efetue a soma dos números ímpares e que são
múltiplos de 3 que se encontram no conjunto dos números de 1 a 500.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int cont=1, soma=0;
    
    while(cont <= 500){
        if(cont % 2 == 1 && cont % 3 == 0){
            printf("%i ", cont);
            soma = soma + cont;
        }
        cont++;
    }

    printf("\n\nSoma: %i\n\n", soma);

    system("pause");
}