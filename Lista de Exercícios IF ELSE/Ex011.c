/*Sabendo que somente os municípios que possuem mais de 20.000 eleitores aptos tem
segundo turno nas eleições para prefeito caso o primeiro colocado não tenha mais que
50% dos votos, fazer um algoritmo que leia o nome do município, a quantidade de
eleitores aptos, o numero de votos do candidato mais votado e informar se ele terá ou
não segundo turno em sua eleição municipal.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    char municipio;
    int quantidadeEleitores, quantidadeVotos;

    printf("Informe o nome do municipio: ");
    scanf("%s", &municipio);
    printf("Informe a quantidade de eleitores aptos: ");
    scanf("%i", &quantidadeEleitores);
    printf("Informe o numero de votos do candidato mais votado: ");
    scanf("%i", &quantidadeVotos);

    
    if(quantidadeEleitores > 20000 && quantidadeVotos < quantidadeEleitores/2){
        printf("\nTERA SEGUNDO TURNO!\n\n");
    }else{
        printf("\nNAO TERA SEGUNDO TURNO!\n\n");
    }


}