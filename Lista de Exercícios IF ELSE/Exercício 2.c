#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if (idade >=16 && idade <=17){
        printf("\nEntre 16 ate 17 anos o voto e facultativo\n\n");
    }else if (idade >=18 && idade <=70){
        printf("\nEntre 18 a 70 anos o voto e obrigatorio\n\n");
    }else if (idade >=70){
        printf("\nAcima de 70 anos o voto e facultativo\n\n");

    }else{
    printf("\nvoce nao tem idade para votar\n\n");
    }

    system("pause");





}
