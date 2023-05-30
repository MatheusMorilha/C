#include<stdio.h>
#include<stdlib.h>

int main () {
    int n, x=14, i, y, resultado=1, e;

    printf("Digite um valor para N: ");
    scanf("%i", &n);
    y=n;
    for (i=0; i<y; i++){
       resultado = resultado * n;
        n--;

    }
    e = resultado + x;

    printf("E = %i", e);


}
