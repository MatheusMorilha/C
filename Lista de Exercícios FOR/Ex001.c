/*Solicitar ao usuário que escolha um número para que seja exibida a sua tabuada
na tela.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int numero, i, resultado;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    for(i=0; i<=10; i++){
        resultado = numero * i;
        printf("%ix%i = %i\n", numero, i, resultado);
    }

    system("pause");
}