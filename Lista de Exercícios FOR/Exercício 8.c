#include<stdio.h>
#include<stdlib.h>

int main () {
    int i, n1, n2, x, n3;

    printf("Informe quantos numeros: ");
    scanf("%i", &x);

    n1= 0;
    n2=1;


    for (i=0; i<x; i++){
        n3 = n1 + n2;
        n2=n3;
        n3 = n3 + n2;
         printf("%i\n", n3);
    }


}
