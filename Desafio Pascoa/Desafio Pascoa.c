#include<stdio.h>
#include<stdlib.h>
//O objetivo desse programa é calulcar e informar o dia e o mes que será Páscoa em determinado ano digitado pelo usuário.
int main () {
    int anodesejado, numeroaureo, calculoseculo, correcoesx, correcoesz, epacta, luacheia, domingo, mes, dia;

    printf("Digite o ano: ");
    scanf("%i", &anodesejado);

    numeroaureo = anodesejado%19 + 1;
    calculoseculo = anodesejado/100 + 1;

    correcoesx = (3*calculoseculo)/4 - 12;
    correcoesz = (8*calculoseculo + 5)/25 - 5;

    epacta = (11*numeroaureo + 20 + correcoesz - correcoesx)%30;

    if (epacta == 25 && numeroaureo > 11 || epacta == 24){

        epacta = epacta + 1;
    }

    luacheia = 44 - epacta;

    if (luacheia < 21){

        luacheia = luacheia + 30;
    }

    domingo = ((5*anodesejado)/4) - (correcoesx +10);
    luacheia = (luacheia + 7) - (domingo + luacheia)%7;


    if (luacheia > 31){
        dia = luacheia - 31;
        printf("\nPascoa: %i de abril de %i\n\n", dia, anodesejado);

    }else {
        dia = luacheia;
        printf("\nPascoa: %i de marco de %i\n\n", dia, anodesejado);
    }

        system("pause");
}
