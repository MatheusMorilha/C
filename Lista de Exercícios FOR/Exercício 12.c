#include<stdio.h>
#include<stdlib.h>

int main () {

   int x, y, i, resultado=1;

    printf("Digite um numero: ");
    scanf("%i", &x);
    y=x;
    for (i=0; i<y; i++){
        resultado = resultado * x;
        x--;

    }
    printf("Resultado: %i\n\n", resultado);

    system("pause");
}
