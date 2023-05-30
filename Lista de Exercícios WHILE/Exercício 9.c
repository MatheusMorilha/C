#include<stdio.h>
#include<stdlib.h>

int main () {
    float rendamensal, aliquota;


    while(rendamensal != 0){
        printf("Informe a sua renda mensal:\nR$ ");
        scanf("%f", &rendamensal);
    if (rendamensal <= 1637.11){
        printf("\nRenda mensal: R$ %.2f", rendamensal);
        printf("\nAliquota: Isento\n\n");
        }
    if (rendamensal >= 1637.12 && rendamensal <= 2453.50) {
        printf("\nAliquota: 7.5 porcento\n");
        aliquota = rendamensal + (rendamensal * (7.5/100));
        printf("Renda mensal: R$ %.2f\n\n", aliquota);
        }
    if (rendamensal >= 2453.51 && rendamensal <= 3271.38) {
        printf("\nAliquota: 15 porcento\n");
        aliquota = rendamensal + (rendamensal * (15/100));
        printf("Renda mensal: R$ %.2f\n\n", aliquota);
        }
    if (rendamensal >= 3271.39 && rendamensal <= 4087.65) {
        printf("\nAliquota: 22.5 porcento\n");
        aliquota = rendamensal + (rendamensal * (22.5/100));
        printf("Renda mensal: R$ %.2f\n\n", aliquota);
        }
    if (rendamensal >= 4087.66) {
        printf("\nAliquota: 27.5 porcento\n");
        aliquota = rendamensal + (rendamensal * (27.5/100));
        printf("Renda mensal: R$ %.2f\n\n", aliquota);
        }

    }
        system("pause");
}
