#include<stdio.h>
#include<stdlib.h>

int main () {
    int destino, tipopassagem;
    char op;

    printf("COMPRAR PASSAGENS\n\n");
    printf("Informe o destino\n");
    printf("1- Regiao Norte\n");
    printf("2- Regiao Nordeste\n");
    printf("3- Regiao Centro-Oeste\n");
    printf("4- Regiao Sul\n\n");

    scanf("%i", &destino);

    switch (destino) {

    case 1:
       printf("Escolha o tipo de passagem\n");
       printf("1 - para somente ida\n");
       printf("2- para ida e volta\n\n");
       scanf("%i", &tipopassagem);

        if (tipopassagem == 1) {
            printf("Destino: Regiao Norte\n");
            printf("Tipo: Somente Ida\n");
            printf("Valor: R$500,00\n\n");

         }else if (tipopassagem ==2) {
            printf("Destino: Regiao Norte\n");
            printf("Tipo: Ida e Volta\n");
            printf("Valor: R$900,00\n\n");
         }else if (tipopassagem != 1 || tipopassagem !=2) {
         printf("Valor Invalido");
         }
            break;



    case 2:
       printf("Escolha o tipo de passagem\n");
       printf("1 - para somente ida\n");
       printf("2- para ida e volta\n\n");
       scanf("%i", &tipopassagem);

        if (tipopassagem == 1) {
            printf("Destino: Regiao Nordeste\n");
            printf("Tipo: Somente Ida\n");
            printf("Valor: R$350,00\n\n");

         }else if (tipopassagem ==2) {
            printf("Destino: Regiao Nordeste\n");
            printf("Tipo: Ida e Volta\n");
            printf("Valor: R$650,00\n\n");
         }else if (tipopassagem != 1 || tipopassagem !=2) {
         printf("Valor Invalido");
         }
            break;



    case 3:
       printf("Escolha o tipo de passagem\n");
       printf("1 - para somente ida\n");
       printf("2- para ida e volta\n\n");
       scanf("%i", &tipopassagem);

        if (tipopassagem == 1) {
            printf("Destino: Regiao Centro-Oeste\n");
            printf("Tipo: Somente Ida\n");
            printf("Valor: R$350,00\n\n");

         }else if (tipopassagem ==2) {
            printf("Destino: Regiao Centro-Oeste\n");
            printf("Tipo: Ida e Volta\n");
            printf("Valor: R$600,00\n\n");
         }else if (tipopassagem != 1 || tipopassagem !=2) {
         printf("Valor Invalido");
         }
            break;



    case 4:
       printf("Escolha o tipo de passagem\n");
       printf("1 - para somente ida\n");
       printf("2- para ida e volta\n\n");
       scanf("%i", &tipopassagem);

        if (tipopassagem == 1) {
            printf("Destino: Regiao Sul\n");
            printf("Tipo: Somente Ida\n");
            printf("Valor: R$300,00\n\n");

         }else if (tipopassagem ==2) {
            printf("Destino: Regiao Sul\n");
            printf("Tipo: Ida e Volta\n");
            printf("Valor: R$550,00\n\n");
         }else if (tipopassagem != 1 || tipopassagem !=2) {
         printf("Valor Invalido");
         }
            break;

    }
}
