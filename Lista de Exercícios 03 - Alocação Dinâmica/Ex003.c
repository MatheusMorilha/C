/*3. Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no vetor.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int n, *vet, x, i;

    printf("Informe o tamanho do vetor N: ");
    scanf("%i", &n);

    printf("\nInforme o valor de X: ");
    scanf("%i", &x);

    vet = (int*) malloc (n*sizeof(int));

        for(i=0; i<n; i++){
            printf("Valor [%i]: ", i+1);
            scanf("%i", &vet[i]);
        }

    printf("\nMultiplos\n\n");

        for(i=0; i<n; i++){
            if (vet[i] %n == 0){
            printf("%i ", vet[i]);
            }
        }
        
    free(vet);
}