#include<stdio.h>
#include<stdlib.h>

int main () {
    float valoremreais, valormoeda;
    char moeda;

    printf("CONVERTER VALOR EM REAIS\n\n");
    printf("Escolha uma opcao de moeda:\n\n");
    printf("F - Franco Suico\n");
    printf("L - Libra Esterlina\n");
    printf("D - Dolar\n");
    printf("M - Marco Alemao\n\n");
    scanf("%c", &moeda);

    printf("\nInforme o valor em R$: ");
    scanf("%f", &valoremreais);

    if (moeda == 'f' || 'F') {
        printf("Moeda Franco Suico\n");
        valormoeda = valoremreais * 0.18;
        printf("Voce tem %.2f Francos Suicos\n", valormoeda);
    } else if (moeda == 'l' || 'L') {
        printf("Moeda Libra Esterlina\n");
        valormoeda = valoremreais * 0.16;
        printf("Voce tem %.2f Libras Esterlinas\n", valormoeda);
    }else if (moeda == 'd' || 'D') {
        printf("Moeda Dolar\n");
        valormoeda = valoremreais * 0.19;
        printf("Voce tem %.2f Dolares\n", valormoeda);
        printf("Marco Alemao\n");
    }else if (moeda == 'm' || 'M') {
        valormoeda = valoremreais * 0.35;
        printf("Voce tem %.2f Marcos Alemoes\n", valormoeda);
    }


}
