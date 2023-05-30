#include<stdio.h>
#include<stdlib.h>

int main () {
    float salario, desconto1, desconto2, desconto3;

    printf("Informe o seu salario atual em R$: ");
    scanf("%f", &salario);


    desconto1 = salario - ((salario * 20)/100);
    desconto2 = salario - ((salario * 25)/100);
    desconto3 = salario - ((salario * 30)/100);

    if (salario <= 600) {

        printf("\nINSS ISENTO, Seu salario nao possui desconto: R$ %.2f\n", salario);

    }else if (salario > 600 && salario <= 1200) {
        printf("\nSeu salario - 20 porcento do INSS sera de: R$ %.2f\n", desconto1);

    }else if (salario > 1200 && salario <= 2000) {
        printf("\nSeu salario - 25 porcento do INSS sera de: R$ %.2f\n", desconto2);

    }else if (salario > 2000) {
        printf("\nSeu salario - 30 porcento do INSS sera de: R$ %.2f\n", desconto3);
    }







}
