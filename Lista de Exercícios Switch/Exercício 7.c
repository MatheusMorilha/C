#include<stdio.h>
#include<stdlib.h>

int main () {
    float peso, pesoplaneta;
    int planeta;
    char op;
do {
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("\nSelecione o planeta desejado:\n\n");
    printf("1- Mercurio\n");
    printf("2- Venus\n");
    printf("3- Marte\n");
    printf("4- Jupiter\n");
    printf("5- Saturno\n");
    printf("6- Urano\n");
    printf("\nSelecione uma opcao: ");
    scanf("%i", &planeta);

    switch (planeta) {

    case 1:
        printf("\nMercurio - Gravidade: 0.37 m/s ao quadrado\n");
        pesoplaneta = peso * 0.37;
        printf("Seu peso em Mercurio seria: %.2f Kg\n", pesoplaneta);
        break;

    case 2:
        printf("\Venus - Gravidade: 0.88 m/s ao quadrado\n");
        pesoplaneta = peso * 0.88;
        printf("Seu peso em Venus seria: %.2f Kg\n", pesoplaneta);
        break;

    case 3:
        printf("\Marte - Gravidade: 0.38 m/s ao quadrado\n");
        pesoplaneta = peso * 0.38;
        printf("Seu peso em Marte seria: %.2f Kg\n", pesoplaneta);
        break;

    case 4:
        printf("\Jupiter - Gravidade: 2.64 m/s ao quadrado\n");
        pesoplaneta = peso * 2.64;
        printf("Seu peso em Jupiter seria: %.2f Kg\n", pesoplaneta);
        break;

    case 5:
        printf("\Saturno - Gravidade: 1.15 m/s ao quadrado\n");
        pesoplaneta = peso * 1.15;
        printf("Seu peso em Saturno seria: %.2f Kg\n", pesoplaneta);
        break;

    case 6:
        printf("\nUrano - Gravidade: 1.17 m/s ao quadrado\n");
        pesoplaneta = peso * 1.17;
        printf("Seu peso em Urano seria: %.2f Kg\n", pesoplaneta);
        break;

    default:
        printf("Opcao Inexistente");
        return 0;
        break;

    }
    printf("\n\nAperte S para realizar uma nova operacao: ");
    scanf("%s", &op);
    printf("\n");

} while (op == 's' || op == 'S'); {
    return 0;
}



}
