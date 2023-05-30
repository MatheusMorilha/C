#include<stdio.h>
#includ4. Criar um programa para identificar o valor a ser pago por um plano de saúde dada
a idade do conveniado considerando que todos pagam R$ 100 mais um adicional
conforme a seguinte tabela:
a. crianças com menos de 10 anos pagam R$80;
b. conveniados com idade entre 10 e 30 anos pagam R$50;
c. conveniados com idade entre 40 e 60 anos pagam R$ 95; e
d. conveniados com mais de 60 anos pagam R$130.e<stdlib.h>

///4. Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do conveniado
///considerando que todos pagam R$ 100 mais um adicional conforme a seguinte tabela:a. crianças com
///menos de 10 anos pagam R$80;b. conveniados com idade entre 10 e 30 anos pagam R$50;c. conveniados
///com idade entre 40 e 60 anos pagam R$ 95; ed. conveniados com mais de 60 anos pagam R$130.///



int main () {
    char idade, op;
    float plano1=180, plano2=150, plano3=195, plano4=230;
do{
    printf("\n\nPLANO DE SAUDE\n\n");

    printf("Informe a sua idade: ");
    printf("Selecione A B C ou D\n");

    printf("\nA - menos de 10 anos\n");
    printf("B - entre 10 e 30 anos\n");
    printf("C - entre 40 e 60\n");
    printf("D - mais de 60\n\n");

    scanf("%s", &idade);

    switch (idade) {

        case 'A':
        case 'a':
            printf("Valor a ser pago: R$%.2f", plano1);
            break;

        case 'B':
        case 'b':
            printf("Valor a ser pago: R$%.2f", plano2);
            break;

        case 'C':
        case 'c':
            printf("Valor a ser pago: R$%.2f", plano3);
            break;

        case 'D':
        case 'd':
            printf("Valor a ser pago: R$%.2f", plano4);
            break;

        default:
            printf("ESCOLHA INVALIDA");
            break;

    }
    printf("\n\nDeseja realizar uma nova busca?\n");
    printf("'S' para - sim 'N' para nao: ");
    scanf("%s", &op);
}while (op == 's' || op == 'S'); {
    return 0;
}

}
