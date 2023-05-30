#include<stdio.h>
#include<stdlib.h>
///1. Faça um programa que simule uma calculadora, onde o usuário informa 2 números e a operação desejada(+ - * /).

int main () {
    int x, y, calculo, resultado;
    char op;
do{
    printf("\n\nESCOLHA UMA OPERACAO\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    printf("Escolha a opcao desejada: ");

    scanf("%i", &calculo);

    switch (calculo) {
    case 1:
        printf("\n\nOPERACAO DE SOMA\n");
        printf("Informe o primeiro numero: \n");
        scanf("%i", &x);
        printf("Informe o segundo numero: \n");
        scanf("%i", &y);
        resultado = x + y;
        printf("SOMA = %i\n", resultado);
        break;

    case 2:
        printf("\n\nOPERACAO DE SUBTRACAO\n");
        printf("Informe o primeiro numero: \n");
        scanf("%i", &x);
        printf("Informe o segundo numero: \n");
        scanf("%i", &y);
        resultado = x - y;
        printf("SUBTRACAO = %i\n", resultado);
        break;

    case 3:
        printf("\n\nOPERACAO DE MULTIPLICACAO\n");
        printf("Informe o primeiro numero: \n");
        scanf("%i", &x);
        printf("Informe o segundo numero: \n");
        scanf("%i", &y);
        resultado = x * y;
        printf("MULTIPLICACAO = %i\n", resultado);
        break;

    case 4:
        printf("\n\nOPERACAO DE DIVISAO\n");
        printf("Informe o primeiro numero: \n");
        scanf("%i", &x);
        printf("Informe o segundo numero: \n");
        scanf("%i", &y);
        resultado = x / y;
        printf("DIVISAO = %i\n", resultado);
        break;

    default:
        printf("NUMEROS INVALIDOS");
        break;
    }

    printf("\n\nDeseja realizar um novo calculo?\n");
    printf("'s' para - sim 'n' para nao: ");
    scanf("%s",&op);

}while (op == 's' || op == 'S');




}


