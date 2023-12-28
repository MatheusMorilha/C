/*Um posto está vendendo combustíveis com a seguinte tabela de descontos: Etanol - até 20 litros, desconto de 3% por litro  
acima de 20 litros, desconto de 5% por litro Gasolina - até 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro Escreva um algoritmo que leia o número de litros vendidos 
e o tipo de combustível (codificado da seguinte forma: E-Etanol, G-gasolina), calcule e imprima o valor a ser pago pelo cliente
sabendo-se que o preço do litro da gasolina é R$ 4,40 e o preço do litro do etanol é R$ 2,90. */

#include<stdio.h>
#include<stdlib.h>

int main () {
    float litrosVendidos, precoEtanol = 2.90, precoGasolina = 4.40, total;
    char tipoCombustivel;

    printf("Informe a quantidade de litros: ");
    scanf("%f", &litrosVendidos);
    printf("Escolha o tipo de combustivel:\n");
    printf("E - Etanol\n");
    printf("G - Gasolina\n");
    printf(">> ");
    fflush(stdin);
    scanf("%c", &tipoCombustivel);

    if(tipoCombustivel == 'e' || tipoCombustivel == 'E'){
        if(litrosVendidos > 0 && litrosVendidos <= 20){
            total = litrosVendidos * (precoEtanol - (precoEtanol * 3)/100);
        }else if (litrosVendidos > 0 && litrosVendidos > 20){
            total = litrosVendidos * (precoEtanol - (precoEtanol * 5)/100);
        }else{
            printf("\nQuantidade de litros invalida!\n\n");
            exit(0);
        }

        printf("\nTipo Combustivel: Etanol\n");
    }

    if(tipoCombustivel == 'g' || tipoCombustivel == 'G'){
        if(litrosVendidos > 0 && litrosVendidos <= 20){
            total = litrosVendidos * (precoGasolina - (precoGasolina * 4)/100);
        }else if (litrosVendidos > 0 && litrosVendidos > 20){
            total = litrosVendidos * (precoGasolina - (precoGasolina * 6)/100);
        }else{
            printf("\nQuantidade de litros invalida!\n\n");
            exit(0);
        }

        printf("\nTipo Combustivel: Gasolina\n");
    }
    
    printf("\nTotal: R$ %.2f\n\n", total);

    system("pause");
    
}