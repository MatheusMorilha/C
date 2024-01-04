/*A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros
termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são
formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:
0 1 1 2 3 5 8 13 21...
Descubra a regra que gera a sequência da série de Fibonacci e escreva um
algoritmo que gere os primeiros n (informado pelo usuário) números termos desta
série e calcula e escreve a soma destes termos.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int n, n1, n2, n3, i, soma;

    printf("Informe a quantidade de numeros para o Fibonacci: ");
    scanf("%i", &n);

    n1 = 0;
    n2 = 1;
    
    for(i=0; i<n; i++){
        printf("%i ", n1);
        soma = soma + n1;
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;    
    }

    printf("\nSoma: %i\n\n", soma);

    system("pause");
}