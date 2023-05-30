#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int A, B, C, delta;

    printf("Informe um valor para A: ");
    scanf("%i", &A);
    printf("Informe um valor para B: ");
    scanf("%i", &B);
    printf("Informe um valor para C: ");
    scanf("%i", &C);

    printf("\nA = %.i\n", A);
    printf("B = %.i\n", B);
    printf("C = %.i\n\n", C);

    delta = pow(B,2) - 4 * A * C;
    if (A == 0){
    printf("Nao e equacao de segundo grau\n\n");

    }else if (delta >= 0){
    printf("\nO valor de Delta e = %i\n\n", delta);

    }else if (delta <0){
    printf("Nao ha raizes reais\n\n");

    }else if (A = 0){
    printf("Nao e equacao de segundo grau\n\n");
    }
    system("pause");
}
