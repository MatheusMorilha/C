#include<stdio.h>
#include<stdlib.h>

int main () {
    int N, divisores=0, qtd, divisor, Num=0, soma=0;

    printf("Digite um numero inteiro: ");

    scanf("%i", &N);
    qtd = N;
    divisor=2;

    while (N > 0) {
        if (N % divisor == 0) {
            Num = N / divisor;
            printf("Numero %i\n", Num);
            divisor++;
            soma = soma + Num;

        }else if (N % divisor != 0) {
            divisor++;
        }
            if (Num == 1) {
                break;
            }
    }

            printf("\nA soma desses numeros e igual a: %i\n\n", soma);
            system("pause");




}
