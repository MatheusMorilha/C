/*As Organizações Tabajara resolveram dar um aumento de salário aos seus
colaboradores e lhe contratou para desenvolver o programa que calculará os e ajustes.
Faça um programa que recebe o salário de um colaborador e o calcule o reajuste
segundo os critérios abaixo:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5%
Após os cálculos informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    float salario;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    if(salario > 0 && salario <= 280){
        printf("\nSalario anterior: %.2f", salario);
        printf("\nAumento de 20 porcento");
        salario = salario + (salario * 20)/100;
        printf("\nReajuste: %.2f\n\n", salario);
    }else if(salario > 280 && salario < 700){
        printf("\nSalario anterior: %.2f", salario);
        printf("\nAumento de 15 porcento");
        salario = salario + (salario * 15)/100;
        printf("\nReajuste: %.2f\n\n", salario);
    }else if(salario > 700 && salario < 1500){
        printf("\nSalario anterior: %.2f", salario);
        printf("\nAumento de 10 porcento");
        salario = salario + (salario * 10)/100;
        printf("\nReajuste: %.2f\n\n", salario);
    }else if(salario >= 1500){
        printf("\nSalario anterior: %.2f", salario);
        printf("\nAumento de 5 porcento");
        salario = salario + (salario * 5)/100;
        printf("\nReajuste: %.2f\n\n", salario);
    }else{
        printf("\nSalario Invalido\n\n");
    }

    system("pause");
}