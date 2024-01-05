/*Solicitar ao usuário a digitação de 10 números, realizar a soma dos
mesmos e apresentar ao fim a média dos números informados.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int cont=1;
    float num, soma, media;

    printf("Digite 10 numeros\n\n");

    while(cont <= 10){
        printf("Digite um numero: ");
        scanf("%2f", &num);
        soma = soma + num;
        cont++;
    }
    
    media = soma / 10;

    printf("\n\nSoma dos numeros: %.2f\n", soma);
    printf("Media: %.2f", media);

    system("pause");
}