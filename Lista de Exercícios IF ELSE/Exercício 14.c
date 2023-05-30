#include<stdio.h>
#include<stdlib.h>

int main () {
    float salariocolaborador, reajuste, aumento20, aumento15, aumento10, aumento5;

    printf("Informe o salario do colaborador: R$ ");
    scanf("%f", &salariocolaborador);

    ///CALCULOS

    aumento20 = salariocolaborador + ((salariocolaborador * 20)/100);
    aumento15 = salariocolaborador + ((salariocolaborador * 15)/100);
    aumento10 = salariocolaborador + ((salariocolaborador * 10)/100);
    aumento5 = salariocolaborador + ((salariocolaborador * 5)/100);

     ///CONDICOES

    if (salariocolaborador <= 280) {

        printf("\nSalario anterior: R$ %.2f", salariocolaborador);
        printf("\nPercentual de reajuste igual a: 20 porcento");
        printf("\nSalario atual com o reajuste: R$ %.2f\n\n", aumento20);

    }else if (salariocolaborador >280 && salariocolaborador <=700) {

        printf("\nSalario anterior: R$ %.2f", salariocolaborador);
        printf("\nPercentual de reajuste igual a: 15 porcento");
        printf("\nSalario atual com o reajuste: R$ %.2f\n\n", aumento15);

    }else if (salariocolaborador >700 && salariocolaborador <1500) {

        printf("\nSalario anterior: R$ %.2f", salariocolaborador);
        printf("\nPercentual de reajuste igual a: 10 porcento");
        printf("\nSalario atual com o reajuste: R$ %.2f\n\n", aumento10);

    }else if (salariocolaborador >=1500) {

        printf("\nSalario anterior: R$ %.2f", salariocolaborador);
        printf("\nPercentual de reajuste igual a: 5 porcento");
        printf("\nSalario atual com o reajuste: R$ %.2f\n\n", aumento5);

    }
        system("pause");


}
