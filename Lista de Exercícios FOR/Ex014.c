/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à
soma de seus divisores positivos diferentes de n. Construa um programa em C
que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6. */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, i, soma=0;

    printf("Informe um numero inteiro e positivo: ");
    scanf("%i", &n);
    
    for(i=1; i<n; i++){
        if(n % i == 0){
            soma = soma + i;
            printf("%i ", i);
        }
    }
        printf("= %i\n", soma);

    if(soma == n){
            printf("\n%i e um numero perfeito\n\n", n);
        }else{
            printf("\n%i nao e um numero perfeito\n\n", n);
        }
}