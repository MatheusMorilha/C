#include<stdio.h>
#include<stdlib.h>

int main () {
    int N, impares=0, qtd;

    printf("Digite um numero inteiro: ");
    scanf("%i", &N);
    qtd = N;

    while (N > 0) {
        if (N % 2 != 0) {
            printf("\nNumero %i\n", N);
            impares++;
        }
        if (impares == qtd){
            break;
        }
        N++;
    }

        printf("\n\n");
        system("pause");








}
