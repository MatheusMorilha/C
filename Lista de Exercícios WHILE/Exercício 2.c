#include<stdio.h>
#include<stdlib.h>

int main () {
    int x;

    printf("Digite os numeros positivos (+)\n");
    printf("Digite um numero negativo (-) para encerrar\n\n");

    x = 1;

    while (x>0){
        printf("Digite um numero\n");
        scanf("%i", &x);

        x = x + 1;
    }
        printf("\n\nPROGRAMA ENCERRADO");
        printf("\n\n\n");
        system("pause");

}
