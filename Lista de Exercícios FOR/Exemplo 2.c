#include<stdio.h>
#include<stdlib.h>

int main () {
    int i, x, y, soma=0, media;

    printf("Quantos numeros deseja informar: ");
    scanf("%i", &y);
    printf("\nInforme %i valores\n", y);

    for (i=0; i<y; i++){
        printf("Valor: ");
        scanf("%i", &x);
        soma=soma+x;
    }
    media=soma/y;
    printf("\nA media dos valores informados e: %i\n\n", media);
    system("pause");

}
