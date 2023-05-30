#include<stdio.h>
#include<stdlib.h>

int main () {
    char nome;
    char sexo;
    int idade;

    printf("Informe o seu nome: ");
    scanf("%s", &nome);

    printf("Informe o seu sexo M/F: ");
    scanf("%s", &sexo);

    printf("Informe a sua idade: ");
    scanf("%i", &idade);

    if (sexo == 'F' && idade < 25) {

        printf("\nACEITA\n\n");
    }else {
        printf("\nNAO ACEITA\n\n");
    }

        system("pause");

}
