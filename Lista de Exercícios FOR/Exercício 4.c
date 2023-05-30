#include<stdio.h>
#include<stdlib.h>

int main () {
    int limiteinf, limitesup, i;

    printf("Informe o numero inicial: ");
    scanf("%i", &limiteinf);
    limiteinf++; /// Vai somar + 1 para iniciar no numero seguinte.

    printf("Informe o numero final: ");
    scanf("%i", &limitesup);


    for (i=limiteinf; i<limitesup; i++) {
        printf("%i  ", i);
    }


}
