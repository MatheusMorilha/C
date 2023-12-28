/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se
forem compradas pelo menos 12. Escreva um programa*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int quantidade;
    float preco;

    printf("Quantas macas deseja comprar: ");
    scanf("%i", &quantidade);

    if(quantidade <12){
        preco = 1.30 * quantidade;
        printf("\nQuantidade: %i", quantidade);
        printf("\nValor Unitario: R$ 1.30");
        printf("\nTotal: %.2f", preco);
    }else{
        preco = 1 * quantidade;
        printf("\nQuantidade: %i", quantidade);
        printf("\nValor Unitario: R$ 1.00");
        printf("\nTotal: %.2f", preco);
    }
}