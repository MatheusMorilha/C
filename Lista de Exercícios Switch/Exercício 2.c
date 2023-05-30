#include<stdio.h>
#include<stdlib.h>
/// 2. Faça um programa que com base no número de lados de uma figura geométrica informada, apresente o seu respectivo nome.

int main () {
    int x;
    char op;

do{
    printf("FIGURAS GEOMETRICAS");
    printf("\n\nInforme a quantidade de lados que a figura possui: ");
    scanf("%i", &x);

    switch (x) {

    case 3:
        printf("\nLados: %i\n", x);
        printf("Triangulo");
        break;

    case 4:
        printf("\nLados: %i\n", x);
        printf("Quadrado ou Retangulo");
        break;

    case 5:
        printf("\nLados: %i\n", x);
        printf("Pentagono");
        break;

    case 6:
        printf("\nLados: %i\n", x);
        printf("Hexagono");
        break;

    default:
        printf("\nFIGURA NAO ENCONTRADA");
        break;
    }
    printf("\n\nDeseja realizar uma nova busca?\n");
    printf("'s' para - sim 'n' para nao: ");
    scanf("%s",&op);

}while (op == 's' || op =='S');


}
