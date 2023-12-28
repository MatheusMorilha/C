/*Entrar com o salario de uma pessoa e imprimir o desconto do INSS segundo a tabela a
seguir:
Menor ou igual a R$ 600,00 Isento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
Maior que R$ 2000,00 30%*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    float salario, desconto;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    if (salario <= 600){
        printf("\nIsento\n\n");
    }else if(salario > 600 && salario <= 1200){
        printf("\nSalario Bruto: %.2f", salario);
        desconto = (salario * 20)/100;
        printf("\nDesconto: %.2f", desconto);
        salario = salario - desconto;
        printf("\nSalario Liquido: %.2f", salario);
    }else if(salario > 1200 && salario <= 2000){
        printf("\nSalario Bruto: %.2f", salario);
        desconto = (salario * 25)/100;
        printf("\nDesconto: %.2f", desconto);
        salario = salario - desconto;
        printf("\nSalario Liquido: %.2f", salario);
    }else if(salario > 2000){
        printf("\nSalario Bruto: %.2f", salario);
        desconto = (salario * 30)/100;
        printf("\nDesconto: %.2f", desconto);
        salario = salario - desconto;
        printf("\nSalario Liquido: %.2f", salario);
    }else{
        printf("\nSalario Invalido\n\n");
    }

    printf("\n\n");
    system("pause");
}