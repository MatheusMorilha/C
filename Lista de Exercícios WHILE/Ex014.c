/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, 
com exceção dele próprio. Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78. */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int num, n, soma=0;

    printf("Digite um numero: ");
    scanf("%i", &num);

    int divisor = 2;

    while(num > 0){
        if(num % divisor == 0){
          n = num / divisor;
          printf("%i ", n);
          divisor++;
          soma = soma + n;  
        }else if(num % divisor != 0){
            divisor++;
        }

        if(n == 1){
            break;
        }

    }

    printf("\nA soma desses numeros e igual a: %i\n\n", soma);
    system("pause");
}