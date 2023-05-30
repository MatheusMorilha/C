#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int idade; /// Variavel idade
    float peso; /// Variavel peso

    printf("Informe a sua idade: \n" );
    scanf("%i", &idade);

    printf("Informe o seu peso: \n" );
    scanf("%f", &peso);

    if (idade >= 18 && idade <= 67 && peso >= 50) ///Condicao
    {
        printf("\nVoce PODE ser doador\n\n");
    }
    else
    {
        printf("\nVoce NAO pode ser doador\n\n");
    }
    system("pause");




}
