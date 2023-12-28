/*Elabore um programa que realize 5 perguntas para uma pessoa sobre um determinado
crime. As perguntas são:
a. "Telefonou para a vítima?"
b. "Esteve no local do crime?"
c. "Mora perto da vítima?"
d. "Devia para a vítima?"
e. "Já trabalhou com a vítima?"
O programa deve no final emitir uma classificação sobre a participação da pessoa no
crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como
"Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será
classificado como "Inocente".
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int resposta, cont=0;

    printf("Telefonou para a vitima: ");
    printf("\n1 - Sim");
    printf("\n0 - Nao");
    printf("\n>> ");
    scanf("%i", &resposta);

    if(resposta == 1){
        cont++;
    }

    printf("\n\nEsteve no local do crime: ");
    printf("\n1 - Sim");
    printf("\n0 - Nao");
    printf("\n>> ");
    scanf("%i", &resposta);

    if(resposta == 1){
        cont++;
    }

    printf("\n\nMora perto da vitima: ");
    printf("\n1 - Sim");
    printf("\n0 - Nao");
    printf("\n>> ");
    scanf("%i", &resposta);

    if(resposta == 1){
        cont++;
    }

    printf("\n\nDevia para a vitima: ");
    printf("\n1 - Sim");
    printf("\n0 - Nao");
    printf("\n>> ");
    scanf("%i", &resposta);

    if(resposta == 1){
        cont++;
    }

    printf("\n\nJa trabalhou com a vitima: ");
    printf("\n1 - Sim");
    printf("\n0 - Nao");
    printf("\n>> ");
    scanf("%i", &resposta);

    if(resposta == 1){
        cont++;
    }

    if(cont == 2){
        printf("\nSUSPEITA\n\n");
    }else if(cont == 3 || cont == 4){
        printf("\nCUMPLICE\n\n");
    }else if(cont == 5){
        printf("\nASSASSINO\n\n");
    }else if(cont == 0){
        printf("\nINOCENTE\n\n");
    }else{
        system("pause");
    }

    system("pause");
}