#include<stdio.h>
#include<stdlib.h>

int main () {
   float horastrabalhadasmes, salariohora, salariototal;

    printf("Informe a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horastrabalhadasmes);

    printf("Informe o salario por hora: R$ ");
    scanf("%f", &salariohora);

    if (horastrabalhadasmes <= 40) {
        salariototal = horastrabalhadasmes * salariohora;
        printf("O salario sera de: R$ %.2f", salariototal);

    } else if (horastrabalhadasmes > 40) {
        salariototal = horastrabalhadasmes * (salariohora + (salariohora * 50/100));
        printf("O salario sera de: R$ %.2f", salariototal);
    }








}
