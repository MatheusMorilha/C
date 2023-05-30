#include<stdio.h>
#include<stdlib.h>

int main () {
    float raio, base, altura, lado1, lado2, areacirculo, arearetangulo, areaquadrado;
    char x, op;
do{
    printf("\nAREA DAS FIGURAS GEOMETRICAS\n\n");

    printf("C - area de um circulo\n");
    printf("R - area de um retangulo\n");
    printf("Q - area de um quadrado\n");
    printf("\nSelecione uma opcao: ");

    scanf("%s", &x);

    switch (x) {

    case 'c':
        printf("\nAREA DO CIRCULO\n");
        printf("Informe o raio do circulo em cm: ");
        scanf("%f", &raio);
        areacirculo = 3.14 * (raio*raio);
        printf("Area do circulo: %.2f cm\n", areacirculo);
        break;

    case 'C':
        printf("\nAREA DO CIRCULO\n");
        printf("Informe o raio do circulo em cm: ");
        scanf("%f", &raio);
        areacirculo = 3.14 * (raio*raio);
        printf("Area do circulo: %.2f cm\n", areacirculo);
        break;

    case 'r':
        printf("\nAREA DO RETANGULO\n");
        printf("Informe o valor da base do retangulo em cm: ");
        scanf("%f", &base);
        printf("Informe o valor da altura do retangulo em cm: ");
        scanf("%f", &altura);
        arearetangulo = base*altura;
        printf("Area do retangulo: %.2f cm\n", arearetangulo);
        break;

    case 'R':
        printf("\nAREA DO RETANGULO\n");
        printf("Informe o valor da base do retangulo em cm: ");
        scanf("%f", &base);
        printf("Informe o valor da altura do retangulo em cm: ");
        scanf("%f", &altura);
        arearetangulo = base*altura;
        printf("Area do retangulo: %.2f cm\n", arearetangulo);
        break;

    case 'q':
        printf("\nAREA DO QUADRADO\n");
        printf("Informe o valor de um lado do quadrado em cm: ");
        scanf("%f", &lado1);
        printf("Informe o valor do outro lado do quadrado em cm: ");
        scanf("%f", &lado2);
        areaquadrado = lado1*lado2;
        printf("Area do quadrado: %.2f cm\n", areaquadrado);
        break;

    case 'Q':
        printf("\nAREA DO QUADRADO\n");
        printf("Informe o valor de um lado do quadrado em cm: ");
        scanf("%f", &lado1);
        printf("Informe o valor do outro lado do quadrado em cm: ");
        scanf("%f", &lado2);
        areaquadrado = lado1*lado2;
        printf("Area do quadrado: %.2f cm\n", areaquadrado);
        break;

    default:
        printf("ESCOLHA INVALIDA\n");
        break;

    }
    printf("\n\nDeseja realizar uma nova busca?\n");
    printf("'S' para - sim 'N' para nao: ");
    scanf("%s", &op);

}while (op == 's' || op == 'S'); {
    return 0;
}



}
