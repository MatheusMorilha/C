#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;

    printf("Inteiro: %i\n", *inteiro);
    printf("Frac: %.2f\n", *frac);
}

int main() {
    float num;
    int inteiro;
    float fracao;

    printf("Informe um numero: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracao);

    return 0;
}

