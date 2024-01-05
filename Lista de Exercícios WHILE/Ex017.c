/*Escreva um programa que leia o número de habitantes de uma determinada cidade, o valor do kwh, 
e para cada habitante entre com os seguintes dados: consumo do mês e o 
código do consumidor (1Residencial, 2-Comercial, 3- Industrial). 
No final imprima o maior, o menor e a média do consumo dos habitantes; 
e por fim o total do consumo de cada categoria de consumidor.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int numHab, codigo, cont=1;
    float valorKwh, consumoMes, consumoRes=0, consumoCom=0, consumoInd=0, maior=0, menor=0, totalGeral, mediaGeral;

    printf("Informe o numero de habitantes: ");
    scanf("%i", &numHab);
    printf("Informe o valor do kwh: ");
    scanf("%i", &valorKwh);


    while(cont <= numHab){
        printf("\nHabitante[%i]\n", cont);
        printf("Consumo mes: ");
        scanf("%f", &consumoMes);

        totalGeral = totalGeral + consumoMes;

    // Maior e Menor consumo entre os habitantes.
        if(cont == 1){
            maior = consumoMes;
            menor = consumoMes;
        }
        
        if(consumoMes > maior){
            maior = consumoMes;
        }

        if(consumoMes < menor){
            menor = consumoMes;
        }

        

    // Media do consumo dos habitantes.

    mediaGeral = totalGeral / numHab;

        printf("\nCodigo Consumidor:\n");
        printf("1 - Residencial\n");
        printf("2 - Comercial\n");
        printf("3 - Industrial\n");
        scanf("%i", &codigo);

        if(codigo == 1){
            cont++;
            consumoRes = consumoRes + consumoMes;
        }else if(codigo == 2){
            cont++;
            consumoCom = consumoCom + consumoMes;
        }else if(codigo == 3){
            cont++;
            consumoInd = consumoInd + consumoMes;
        }else{
            printf("\nOpcao invalida\n\n");
        }

    }

        printf("\n\nMaior consumo entre os habitantes: %.2f\n", maior);
        printf("Menor consumo entre os habitantes: %.2f\n", menor);
        printf("Media do consumo total: %.2f\n", mediaGeral);
        printf("Consumo Residencial: %.2f\n", consumoRes);
        printf("Consumo Comercial: %.2f\n", consumoCom);
        printf("Consumo Industrial: %.2f\n\n", consumoInd);

        system("pause");

}