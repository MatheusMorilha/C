#include<stdio.h>
#include<stdlib.h>

int main () {
    int x, contador=0, sequencia=0, resultado=0, resposta;
do {
    printf("\n\n----GERADOR DE TABUADA----\n\n\n");
    printf("Digite um numero de 1 a 10: ");
    scanf("%i", &x);
    printf("\n");

    ///a tag For serve para definir a quantidade de vezes que o numero sera repetido

            for(contador=0;contador<=10;contador++){
            printf("%i x %i = %i\n", x, sequencia, resultado);
            sequencia = sequencia + 1;
            resultado = sequencia * x;
            }


        printf("\nDeseja fazer um novo calculo?\n");
        printf("\nPressione 1 para sair");
        printf("\nPressione 2 para continuar: \n\n");
        scanf("%i", &resposta);

        } while (resposta != 1);{
            system("pause");
            return 0;
        }








}
