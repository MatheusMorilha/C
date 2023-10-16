/*6. Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo
usuário e a leia. Em seguida, implemente uma função que receba um valor, retorne 1 caso o valor esteja na
matriz ou retorne 0 caso não esteja na matriz.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int **mat, i, j;
    int qtdLinhas, qtdColunas;
    int verificador=0;

    printf("Informe a quantidade de linhas: ");
    scanf("%i", &qtdLinhas);

    printf("Informe a quantidade de colunas: ");
    scanf("%i", &qtdColunas);

    mat = malloc (qtdLinhas * sizeof (int*));

    for(i=0; i<qtdLinhas; i++){
        mat[i] = malloc (qtdColunas * sizeof(int));
    }

    for(i=0;i<qtdLinhas;i++){
        for(j=0; j<qtdColunas; j++){
            printf("Posicao[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);

            if(mat[i][j] == 19){
                verificador = 1;
            }
        }
    }

    for(i=0;i<qtdLinhas;i++){
        for(j=0; j<qtdColunas; j++){
            printf("%i ", mat[i][j]);
            printf("\n");
        }
    }

    if(verificador!=0){
        printf("\n\n1 - O valor esta na matriz\n\n");
    }else{
        printf("\n\n0 - O valor nao esta na matriz\n\n");
    }

    for(i=0; i<qtdLinhas; i++){
        free(mat[i]);
        free(mat);
    }



}