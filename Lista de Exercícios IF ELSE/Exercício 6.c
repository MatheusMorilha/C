#include<stdio.h>
#include<stdlib.h>

int main () {

    int qtdfruta;
    float preco1, preco2;

    printf("Digite a quantidade de macas que voce quer comprar: ");
    scanf("%i", &qtdfruta);

    preco1 = qtdfruta * 1.3;
    preco2 = qtdfruta * 1;

    if (qtdfruta < 12) {

        printf("\nPreco unitario de cada maca igual a R$ 1.30\n");
        printf("Valor total a pagar: R$ %.2f\n\n", preco1);
    } else if (qtdfruta >= 12) {

        printf("\nPreco unitario de cada maca igual a R$ 1.00\n");
        printf("Valor total a pagar: R$ %.2f\n\n", preco2);
    }
        system("pause");

}
