#include<stdio.h>
#include<stdlib.h>

int main () {
    char municipio;
    float eleitoresaptos, votosprimeiro;

    printf("Informe o nome do municipio: ");
    scanf("%s", &municipio);

    printf("Informe a quantidade de eleitores aptos: ");
    scanf("%f", &eleitoresaptos);

    printf("Informe a quantidade de votos do candidato mais votado: ");
    scanf("%f", &votosprimeiro);

    if (eleitoresaptos >= 20000 && votosprimeiro < (eleitoresaptos*50)/100) {

        printf("SERA ABERTa A DISPUTA PELO SEGUNDO TURNO");

    }else{

        printf("NAO TERA SEGUNDO TURNO");
    }

        system("pause");





}
