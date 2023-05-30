#include<stdio.h>
#include<stdlib.h>
/// RESPONDA O INTERROGATORIO.
int main ()
{

    char resposta; /// VARIAVEIS
    int x=0; ///CONTADORA DE S / N

    printf("RESPONDA s - sim ou n - nao\n\n");

    printf("Telefonou para a vitima? s/n: ");
    scanf("%c", &resposta);
    if (resposta == 's' || resposta =='S')
    {
        x = x+1; /// ou x++
    }
    fflush(stdin); /// LIMPA O BUFFER DO TECLADO
    printf("Esteve no local do crime? s/n: ");
    scanf("%c", &resposta);
    if (resposta == 's' || resposta =='S')
    {
        x = x+1;
    }
    fflush(stdin);
    printf("Mora perto da vitima? s/n: ");
    scanf("%c", &resposta);
    if (resposta == 's' || resposta =='S')
    {
        x = x+1;
    }
    fflush(stdin);
    printf("Devia para a vitima? s/n: ");
    scanf("%c", &resposta);
    if (resposta == 's' || resposta =='S')
    {
        x = x+1;
    }
    fflush(stdin);
    printf("Ja trabalhou com a vitima s/n: ");
    scanf("%c", &resposta);
    if (resposta == 's' || resposta =='S')
    {
        x = x+1;
    }
    if (x == 2)
    {
        printf("\nSUSPEITA\n\n");

    }
    else if (x == 3 || x == 4)
    {
        printf("\nCUMPLICE\n\n");

    }
    else if (x == 5)
    {
        printf("\nASSASSINO\n\n");

    }
    else
    {
        printf("\nINOCENTE\n\n");
    }
    system("pause");


}
