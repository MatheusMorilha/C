#include<stdio.h>
#include<stdlib.h>
///5. Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe
///o consumo estimado de combustível, sabendo-se que um carro tipo A faz 12km
///com um litro de gasolina, um tipo B faz 9km e o tipo C, 8km por litro.

int main () {
    float distancia, consumo;
    char tipo, op;
do{
    printf("\n\nInforme a distancia em km: ");
    scanf("%f", &distancia);

    printf("Informe o tipo de carro: ");
    printf("\n\nA - 12km/L\n");
    printf("B - 9km/L\n");
    printf("C - 8km/L\n\n");
    printf("Tipo: ");

    scanf("%s", &tipo);

    switch (tipo) {
        case 'A':
        case 'a':
            printf("\n\nTipo A - 12km/L\n");
            consumo = distancia/12;
            printf("Distancia: %f km\n", distancia);
            printf("Consumo: %f L\n", consumo);
            break;

        case 'B':
        case 'b':
            printf("\n\nTipo B - 9km/L\n");
            consumo = distancia/9;
            printf("Distancia: %f km\n", distancia);
            printf("Consumo: %f L\n", consumo);
            break;

        case 'C':
        case 'c':
            printf("\n\nTipo C - 8km/L\n");
            consumo = distancia/8;
            printf("Distancia: %f km\n", distancia);
            printf("Consumo: %f L\n", consumo);
            break;

        default:
            printf("OPCAO INVALIDA");
            break;
    }
    printf("\n\nDeseja realizar uma nova busca?\n");
    printf("'S' para - sim 'N' para nao: ");
    scanf("%s", &op);

}while (op == 's' || op == 'S'); {
    return 0;
}
}
