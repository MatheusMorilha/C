#include<stdio.h>
#include<stdlib.h>


int main () {
    int numerohab, contadorhab=1, consumomes, codigoconsumidor, contresid=0, contcomerc=0, contind=0, total=0, media, soma1=0, soma2=0, soma3=0;
    float valorkwh=0.24;

    printf("Informe a quantidade de habitantes: ");
    scanf("%i", &numerohab);

    printf("Informe o valor do kwh: ");
    scanf("%f", &valorkwh);

    while (contadorhab <= numerohab){

        printf("\n\nInforme o codigo do consumidor: ");
        scanf("%i", &codigoconsumidor);

        if (codigoconsumidor == 1){
            printf("\n\n-Residencial\n");
            printf("Informe o consumo do mes: ");
            scanf ("%i", &consumomes);
            contresid++;
            total = total + consumomes;
            soma1 = soma1 + consumomes;
        }
        if (codigoconsumidor == 2){
            printf("\n\n-Comercial\n");
            printf("Informe o consumo do mes: ");
            scanf ("%i", &consumomes);
            contcomerc++;
            total = total + consumomes;
            soma2 = soma2 + consumomes;
        }
        if (codigoconsumidor == 3){
            printf("\n\n-Industrial\n");
            printf("Informe o consumo do mes: ");
            scanf ("%i", &consumomes);
            contind++;
            total = total + consumomes;
            soma3 = soma3 + consumomes;

        }

            contadorhab++;

    }
            media = total / numerohab;
            printf("\n\nConsumo total de todos os habitantes igual a %i Kwh\n", total);
            printf("\nO Consumo da categoria Residencial e de %i Kwh", soma1);
            printf("\nO Consumo da categoria Comercial e de %i Kwh", soma2);
            printf("\nO Consumo da categoria Industrial e de %i Kwh", soma3);
            printf("\nA media do consumo dos habitantes e de: %i Kwh\n", media);
}
