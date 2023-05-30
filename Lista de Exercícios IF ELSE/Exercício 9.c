#include<stdio.h>
#include<stdlib.h>

int main () {
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if (media <= 5.0){
        printf("\nMedia: %.2f", media);
        printf("\nREPROVADO\n\n");
    }else if (media > 5.1 && media <= 6.9){
        printf("\nMedia: %.2f", media);
        printf("\nEXAME\n\n");

    }else if (media >= 7.0 && media <= 10.0){
        printf("\nMedia: %.2f", media);
        printf("\nAPROVADO\n\n");
    }
        system("pause");





}
