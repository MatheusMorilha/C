#include <stdio.h>
#include <stdlib.h>

// Fun��o que calcula a soma de 'a' e 'b' e atualiza o valor de 'a' com o resultado
int somaVariaveis(int *a, int b) {
    int soma = *a + b; // Calcula a soma de 'a' e 'b'
    *a = soma; // Atualiza o valor apontado por 'a' com a soma
}

int main() {
    int a, b;

    printf("Digite um valor para A: ");
    scanf("%i", &a); // L� o valor de 'a' do usu�rio
    printf("Digite um valor para B: ");
    scanf("%i", &b); // L� o valor de 'b' do usu�rio

    somaVariaveis(&a, b); // Chama a fun��o para calcular a soma e atualizar 'a'

    printf("\nA = %i, B = %i\n\n", a, b); // Imprime os valores atualizados de 'a' e 'b'

    return 0;
}
