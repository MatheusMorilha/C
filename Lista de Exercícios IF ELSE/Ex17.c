/*A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, 
cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês,
o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, 
caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas). */

#include<stdio.h>
#include<stdlib.h>

int main () {
    float horasTrabalhadas, salarioHora, salarioHoraAcrescimo, salarioTotal, horasExtras, horasMensais = 160;

    printf("Informe a quantidade de horas trabalhadas em um mes: ");
    scanf("%f", &horasTrabalhadas);
    printf("Informe o salario por hora: ");
    scanf("%f", &salarioHora);

    salarioHoraAcrescimo = salarioHora + (salarioHora * 50)/100;

    if(horasTrabalhadas > horasMensais){
        horasExtras = horasTrabalhadas - horasMensais;
        salarioTotal = (salarioHora * horasMensais) + (salarioHoraAcrescimo * horasExtras);
    }else if(horasTrabalhadas < horasMensais){
        salarioTotal = horasTrabalhadas * salarioHora;
    }

        printf("\nSalario Total: R$ %.2f", salarioTotal);
        printf("\nHoras trabalhadas: %.2f horas // %.2f horas\n\n", horasTrabalhadas, horasMensais);

    system("pause");
}