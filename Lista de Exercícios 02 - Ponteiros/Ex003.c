#include<stdio.h>
#include<stdio.h>

int main () {
    int x, y;

    printf("Digite um valor para X: ");
    scanf("%i", &x);
    printf("\nDigite um valor para Y: ");
    scanf("%i", &y);

    int *ptrX = &x;
    int *ptrY = &y;

    printf("\nEndereco X: %i", &x);
    printf("\nEndereco Y: %i", &y);

    if (&x > &y){
        printf("\n\nConteudo da variavel de maior endereco: %i\n\n", *ptrX);
    }else{
        printf("\n\nConteudo da variavel de maior endereco: %i\n\n", *ptrY);
    }

    system("pause");

}
