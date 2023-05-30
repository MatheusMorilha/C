#include<stdio.h>
#include<stdlib.h>

int main () {
    int numero, i, maior=0;

    printf("Informe 10 numeros\n\n");
    for (i=0; i<10; i++){
        printf("Informe um numero: ");
        scanf("%i", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }
        printf("\nO maior numero e o: %i\n\n", maior);

        system("pause");
}
