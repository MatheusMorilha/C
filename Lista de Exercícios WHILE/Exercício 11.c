#include<stdio.h>
#include<stdlib.h>
///TRIANGULO RETANGULO
int main () {
    int n, x;

    printf("Informe valor para n: ");
    scanf("%i", &n);
    x=1;

    while (n>=1) {
        x=1;
        while (x<=n) {
            printf("*");
            x=x+1;
        }
        printf("\n");
        n = n-1;
    }

}
