#include<stdio.h>
#include<stdlib.h>

///6. Tem-se um conjunto de dados contendo a altura e o sexo (m ou f) de 10
///pessoas. Faça um algoritmo que calcule e mostre:
///a. A média de altura das mulheres
///b. A média de altura dos homens.

int main () {
    int contador=0;
    float somaM=0, somaF=0, altura, mediaM, mediaF, contM=0, contF=0;
    char sexo;

    printf("ALTURA MEDIA DOS HOMENS E DAS MULHERES\n");

    while (contador <11) {

        printf("\n\nInforme o seu sexo M- Masc / F- Fem: \n");
        scanf("%s", &sexo);

        printf("Informe a sua altura: \n");
        scanf("%f", &altura);

        if (sexo == 'm' || sexo == 'M') {
        contador++;
        contM++;
        somaM = somaM + altura;

    }else if (sexo == 'f' || sexo == 'F') {
        contador++;
        contF++;
        somaF = somaF + altura;
    }

}
    mediaM = somaM / contM;
    mediaF = somaF / contF;

    printf("\n\nA altura media dos homens e igual a: %.2f\n", mediaM);
    printf("\nA altura media das mulheres e igual a: %.2f\n\n\n", mediaF);

     system("pause");
}



