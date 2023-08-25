#include<stdio.h>

float soma (float vetor[], int tamanho){
    if (tamanho == 0){
        return 0; // Valor 0 pois a operacao e de SOMA.
    }else{
        return vetor[tamanho-1] + soma(vetor, tamanho -1);
    }

}

int main () {
    int tamanho, i, y=1;

    printf("Informe o tamanho do vetor: ");
    scanf("%i", &tamanho);
    printf("\n");

    float vet[tamanho];

    for(i=0; i<tamanho; i++){
        printf("Numero[%i]: ", y);
        scanf("%f", &vet[i]);
        y++;
    }

    printf("\nO resultado da soma e: %.2f\n\n", soma(vet, tamanho));

    system("pause");
}
