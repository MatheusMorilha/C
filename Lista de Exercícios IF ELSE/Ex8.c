/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% Se o valor
da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o
valor do produto e imprimir o valor da venda.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    float valor;

    printf("\nDigite o valor do produto: ");
    scanf("%f", &valor);
    
    if(valor < 20){
        valor = valor + (valor * 45)/100;
        printf("\nPreco de venda: %f\n\n", valor);
    }else{
        valor = valor + (valor * 30)/100;
        printf("\nPreco de venda: %f\n\n", valor);
    }

    system("pause");
    
}