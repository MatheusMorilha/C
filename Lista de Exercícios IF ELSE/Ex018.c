/*Tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa, calcule e mostre seu peso ideal,
 utilizando as seguintes fórmulas: 
 a. para sexo masculino: peso ideal = (72.7 * altura) - 58
b. para sexo feminino: peso ideal = (62.1 * altura) - 44.7 
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    char nome, sexo;
    float altura, pesoIdeal;

    printf("Informe o nome: ");
    fflush(stdin);
    scanf("%s", &nome);
    printf("Informe o sexo: ");
    fflush(stdin);
    scanf("%c", &sexo);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    if(sexo == 'm' || sexo == 'M'){
        pesoIdeal = (72.7 * altura) - 58;
    }else if(sexo == 'f' || sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
    }else{
        printf("\n\nSexo Inexistente\n\n");
    }

    printf("\nO seu peso ideal e: %.2f\n\n", pesoIdeal);

    system("pause");
}