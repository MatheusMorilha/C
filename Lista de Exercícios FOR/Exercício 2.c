#include<stdio.h>
#include<stdlib.h>

int main () {
    int numero, i;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    for (i=0; i<numero; i++) {
        if (i % 2 == 1) {
            printf("%i\n", i);
        }
    }



}
