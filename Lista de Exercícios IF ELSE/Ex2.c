/*FaÃ§a um programa que receba a idade de uma pessoa identifique se ela pode retirar o
tï¿½tulo de eleitor votar neste ano. Sabendo que:
a. 16 e 17 anos tem o voto facultativo;
b. 18 a 70 anos voto obrigatï¿½rio;
c. Acima de 70 anos tem voto facultativo.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade;

    printf("Informe a idade da pessoa: ");
    scanf("%i", &idade);

    printf("\n");

    if(idade >= 16 && idade <= 17){
        printf("Voto facultativo\n");
    }else if(idade >=18 && idade <=70){
        printf("Voto obrigatório\n");
    }else if(idade > 70){
        printf("Voto facultativo\n");
    }else{
        printf("A pessoa não pode votar");
    }

    printf("\n\n");

    system("pause");

}