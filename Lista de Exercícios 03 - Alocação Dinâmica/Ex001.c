/*1. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de
memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são
ímpares.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int tamanho, *vet, i, contPar=0;

    printf("Informe o tamanho do vetor: ");
    scanf("%i", &tamanho);

    vet = (int*) malloc (tamanho*sizeof(int));

    if(vet == NULL){
        printf("Erro de alocacao de memoria");
        return 0;
    }

        for(i=0;i<tamanho;i++){
            printf("Informe o [%i] valor: ", i + 1);
            scanf("%i", &vet[i]);

            if(vet[i] %2 == 0){
                contPar++;
            }
        }

        printf("\nQuantidade de numeros pares: %i\n", contPar);
        printf("Quantidade de numeros impares: %i", tamanho - contPar);

        
    
    
    free(vet);
    return 0;
}