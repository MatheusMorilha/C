#include<stdio.h>
#include<stdlib.h>

int main () {
    int numeroconta, contaselecionada, tipooperacao, deposito, saque, saldo=0;
    char op;

        printf("Informe o numero da sua conta bancaria: ");
    scanf("%i", &numeroconta);

do{
    printf("\nSaldo atual: %i", saldo);

    printf("\n\nSelecione uma operacao:\n");
    printf("1 - Deposito   2 - Saque\n");
    printf("Selecione: ");
    scanf("%i", &tipooperacao);

    switch (tipooperacao) {

    case 1:
    printf("\n\nDEPOSITO\n");
    printf("\nInforme um valor para ser depositado: ");
    scanf("%i", &deposito);
    saldo = saldo + deposito;
    printf("\nSaldo atual: %i", saldo);
    break;

    case 2:
    printf("\n\nSAQUE\n");
    printf("\nInforme um valor para ser sacado: ");
    scanf("%i", &saque);
    saldo = saldo - saque;
    printf("\nSaldo atual: %i", saldo);
    break;

    }
    contaselecionada = numeroconta;
    printf("\n\nDeseja realizar uma nova busca?\n");
    printf("'S' para - sim 'N' para nao: ");
    scanf("%s", &op);

}while (op == 's' || op == 'S'); {
    return 0;

}
}
