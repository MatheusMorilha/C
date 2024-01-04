/*Solicite ao usuário a digitação de um número e apresente o seu fatorial.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int num, i, fat=1, num1;

    printf("Digite um numero: ");
    scanf("%i", &num);

    num1 = num;

    if(num != 0){
        for(i=1; i<=num; i++){
            fat = fat * i;
        }
    }else{
        printf("\nNao existe fatorial para o numero ZERO\n\n");
    }
    printf("Fatorial de %i igual a: %i\n\n", num1, fat);

    system("pause");
}