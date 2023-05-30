#include<stdio.h>
#include<stdlib.h>

int main () {
    int numero, multiplo;

    printf("Os 5 primeiros numeros multiplos de 3\n");

multiplo=0;
numero=1;

    while (numero>0) {

    if (numero%3==0){

        printf ("\nnumero %i", numero);
        multiplo++;
    }
    if (multiplo==5)
    {
        break;
    }
        numero++;
}
    printf("\n\n");
    system("pause");
}





