#include<stdio.h>
#include<stdlib.h>

int main () {
    float soma=0, j, div;
    int i;
    j=1;
    for (i=1; i<=99; i++){
        div = i / j;
        soma = soma + div;
        i++;
        j++;

    }
        printf("soma igual a: %.2f\n\n", soma);
}
