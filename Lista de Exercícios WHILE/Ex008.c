/*Dada uma sequência de números, obter a soma dos positivos e a quantidade dos negativos. 
O ponto de parada ocorrerá quando o número for zero.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int cont;
    float somaPosi, somaNeg;
    
    while(cont != 0 ){

        printf("Digite um numero: ");
        scanf("%i", &cont);

        if(cont > 0){
            somaPosi = somaPosi + cont;
        }

        if(cont < 0){
            somaNeg = somaNeg + cont;
        }

    }

    printf("\n\nSoma Positivos: %.2f\n", somaPosi);
    printf("Soma Negativos: %.2f\n\n", somaNeg);

    system("pause");
}