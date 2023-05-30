#include<stdio.h>
#include<stdlib.h>

int main () {
    int i, x, n, n2, n3;

    printf("Digite quantos numeros deseja digitar: ");
    scanf("%i", &x);

    for (i=0; i<x; i++){
        printf("Digite o valor: ");
        scanf("%i", &n);

        if (i==0){
            n2=n;
            n3=n;

        }if (n>n3){
        n3=n;

        }if (n<n2){
        n2=n;
        }
    }
        printf("Maior %i\nMenor %i", n3, n2);

}
