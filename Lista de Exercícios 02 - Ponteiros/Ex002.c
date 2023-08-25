#include<stdio.h>
#include<stdlib.h>


int main () {
    int x, y;

    int *ptrX = &x;
    int *ptrY = &y;

    printf("ENDERECOS:\n\n");
    printf("Endereco X: %i\n", &x);
    printf("Endereco Y: %i\n\n", &y);

    system("pause");

}
