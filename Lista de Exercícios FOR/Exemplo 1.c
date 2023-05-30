#include<stdio.h>
#include<stdlib.h>

int main () {
    int i, x, soma=0;

    printf("Informe 5 valores:\n");

    for (i=0; i<5; i++){
        printf("Valor: ");
        scanf("%i", &x);
        soma=soma+x;
    }
    printf("\nA soma dos valores informados e %i\n\n", soma);
    system("pause");


}
