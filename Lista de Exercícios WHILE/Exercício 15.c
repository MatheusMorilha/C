#include<stdio.h>
#include<stdlib.h>

int main () {
    float saque;

    printf("Informe o valor do saque = R$ ");
    scanf("%f", &saque);

    while (saque >= 200) {
        printf("Nota de R$ 200,00\n");
        saque = saque - 200;
    }
    while (saque >=100) {
        printf("Nota de R$ 100,00\n");
        saque = saque - 100;
    }
    while (saque >= 50) {
        printf("Nota de R$ 50,00\n");
        saque = saque - 50;
    }
    while (saque >= 20) {
        printf("Nota de R$ 20,00\n");
        saque = saque - 20;
    }
    while (saque >= 10) {
        printf("Nota de R$ 10,00\n");
        saque = saque - 10;
    }

    if (saque == 4 || saque == 6 || saque == 8 || saque ==2) {
    while (saque >= 2) {
        printf("Nota de R$ 2,00\n");
        saque = saque - 2;
        }
    }
    while (saque >= 5) {
        printf("Nota de R$ 5,00\n");
        saque = saque - 5;
    }


}



