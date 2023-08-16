//Criar um jogo de PEDRA, PAPEL E TESOURA utilizando a lógica de programação em C

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main ()
{
    int pedrapapeltesoura, computador;

    printf("DESAFIO - JOKENPO\n\n");
    printf("1-PEDRA\n");
    printf("2-PAPEL\n");
    printf("3-TESOURA\n\n");


    /// JOGADOR DIGITA O NUMERO

    printf("Jogador escolha uma opcao (digite o numero): ");
    scanf("%i", &pedrapapeltesoura);


    if (pedrapapeltesoura == 1)
    {

        printf("\nVOCE ESCOLHEU (PEDRA)\n");

    }
    else if (pedrapapeltesoura == 2)
    {

        printf("\nVOCE ESCOLHEU (PAPEL)\n");

    }
    else if (pedrapapeltesoura == 3)
    {

        printf("\nVOCE ESCOLHEU (TESOURA) \n");

    }
        if(pedrapapeltesoura <1 || pedrapapeltesoura >3){
        printf("\n\nVALOR INVALIDO\n\n\n");

        system("pause");

    }

    /// GERAR UM NUMERO ALEATORIO
    srand(time(NULL));
    computador = 1 + rand() % 3;


    /// COMPUTADOR INFORMA O NUMERO ALEATORIO

    if (computador == 1)
    {

        printf("\nO COMPUTADOR ESCOLHEU (PEDRA)\n\n");

    } else if (computador == 2)
    {
        printf("\nO COMPUTADOR ESCOLHEU (PAPEL)\n\n");

    } else if (computador == 3)
    {
        printf("\nO COMPUTADOR ESCOLHEU (TESOURA) \n\n");
    }


    ///CONDICOES COMPUTADOR GANHAR
        if(computador == 1 && pedrapapeltesoura ==3){
        printf("\nRESULTADO:\n\n");
        printf("COMPUTADOR VENCEU AMASSANDO A TESOURA\n\n");
    }

        if(computador == 3 && pedrapapeltesoura ==2){
        printf("\nRESULTADO:\n\n");
        printf("COMPUTADOR VENCEU CORTANDO O PAPEL\n\n");
    }

        if(computador == 2 && pedrapapeltesoura ==1){
        printf("\nRESULTADO:\n\n");
        printf("COMPUTADOR VENCEU EMBRULHANDO A PEDRA\n\n");
    }


    ///CONDICOES JOGADOR GANHAR
        if(pedrapapeltesoura == 1 && computador ==3){
        printf("\nRESULTADO:\n\n");
        printf("VOCE VENCEU! A PEDRA AMASSOU A TESOURA\n\n");
    }

        if(pedrapapeltesoura == 3 && computador ==2){
        printf("\nRESULTADO:\n\n");
        printf("VOCE VENCEU! A TESOURA CORTOU O PAPEL\n\n");
    }

        if(pedrapapeltesoura == 2 && computador ==1){
        printf("\nRESULTADO:\n\n");
        printf("VOCE VENCEU! O PAPEL EMBRULHOU A PEDRA\n\n");

    ///CONDICAO DE EMPATE
        }else if (pedrapapeltesoura == 1 && computador ==1){
        printf("\nRESULTADO:\n\n");
        printf("EMPATE\n\n");

        }else if (pedrapapeltesoura == 2 && computador ==2){
        printf("\nRESULTADO:\n\n");
        printf("EMPATE\n\n");

        }else if (pedrapapeltesoura == 3 && computador ==3){
        printf("\nRESULTADO:\n\n");
        printf("EMPATE\n\n");
    }
        system("pause");
}







