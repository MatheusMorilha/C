/*Criar um programa que leia a quantidade de números que se deseja digitar para
que possa ser impresso o maior e o menor número digitados. Não suponha que
todos os números lidos serão positivos.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int quantidade, i, numero, maior, menor;

    printf("Informe a quantidade de numeros que deseja digitar: ");
    scanf("%i", &quantidade);

    for(i=0; i<quantidade; i++){
        printf("Digite um numero: ");
        scanf("%i", &numero);
        
        if(i==0){
            maior = numero;
            menor = numero;
        }

        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    
    }

    printf("\n\nMaior numero: %i", maior);
    printf("\nMenor numero: %i", menor);

    system("pause");
}