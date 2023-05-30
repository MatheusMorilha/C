#include<stdio.h>
#include<stdlib.h>

int main () {
    int n, i, soma=0;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    for (i=1; i<n; i++){
        if (n%i==0){
        soma = soma + i;
        printf("%i ", i);

        }
    }
        printf("\nsoma igual %i", soma);
        if (soma == n) {
            printf("\n\nO numero e perfeito\n");
    }else{
            printf("\n\nO numero nao e perfeito\n");
    }
}
