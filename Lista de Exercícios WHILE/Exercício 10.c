#include<stdio.h>
#include<stdlib.h>

int main () {
    int m, n, x=1, y=1;

    /// M - Largura
    /// N - Altura

    printf("Informe valor para largura: ");
    scanf("%i", &m);
    printf("Informe valor para altura: ");
    scanf("%i", &n);


    while (y<=n) {
        x=1;
        while (x<=m){
        printf("*");
        x++;
        }

        printf("\n");
        y++;
    }
}
