#include<stdio.h>
#include<stdlib.h>

int main () {
    int contadorC=0, contadorP=0, contadorF=0, time;
    char op;
do{
    printf("Escolha o seu time favorito\n\n");
    printf("1 - CORINTHIANS\n");
    printf("2 - PALMEIRAS\n");
    printf("3 - FLAMENGO\n\n");

    printf("Escolha um numero\n");

    scanf("%i", &time);

    switch (time) {
    case 1:
        contadorC++;
        break;

    case 2:
        contadorP++;
        break;

    case 3:
        contadorF++;
        break;

    default:
        printf("Informacao invalida");
        break;
}
        printf("Deseja informar novo time?\n");
        scanf("%s",&op);

   } while(op == 's' || op == 'S');
    printf("Corintians = %i\n", contadorC);
    printf("Palmeiras = %i\n", contadorP);
    printf("Flamengo = %i\n", contadorF);
}
