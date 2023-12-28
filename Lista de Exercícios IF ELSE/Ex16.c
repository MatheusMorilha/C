/*Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não.
 Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2018. */

 #include<stdio.h>
 #include<stdlib.h>

 int main () {
    int dia, mes, ano;

    printf("Informe a data do seu aniversario\n");
    printf("Dia: ");
    scanf("%i", &dia);
    printf("Mes: ");
    scanf("%i", &mes);
    printf("Ano: ");
    scanf("%i", &ano);

    if(dia > 0 && dia <= 31){
        if(mes > 0 && mes <= 12){
            if(ano > 1900 && ano < 2019){
                printf("Data de aniversario: %i/%i/%i", dia, mes, ano);
                printf("\nA data e valida!\n\n");
            }else{
                printf("\nVerifique o ano\n");
            }
        }else{
            printf("\nVerifique o mes\n");
        }
    }else{
        printf("\nVerifique o dia\n");
    }

    system("pause");
    
 }