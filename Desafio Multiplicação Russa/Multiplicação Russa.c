#include<stdio.h>
#include<stdlib.h>

int main () {
    int a, b, soma=0, y;

    printf("Informe um valor para A: ");
    scanf("%i", &a);

    printf("Informe um valor para B: ");
    scanf("%i", &b);
    y=b;
    printf("\nA      B     PARCELAS\n");
    printf("%i    %i        %i\n", a, b, b);
    while (a!= 1){
        a = a/2;
        b = b*2;
        printf("%i    %i     %i\n", a, b, b);

        if (a%2==1){
            soma = soma + b;
        }
    }
        soma = soma + y;
        printf("\nSoma: %i\n\n", soma);


        system("pause");


}
