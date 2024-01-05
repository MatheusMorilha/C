/*Tem-se um conjunto de dados contendo a altura e o sexo (m ou f) de 10
pessoas. Faça um algoritmo que calcule e mostre:
a. A média de altura das mulheres
b. A média de altura dos homens.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    char sexo;
    float altura, somaM=0, somaF=0;
    int cont=1, contM=0, contF=0;

    while(cont <= 10){
        printf("Informe o sexo: M - Masculino F - Feminino");
        printf("\n>> ");
        fflush(stdin);
        scanf("%c", &sexo);
        printf("Informe a altura: ");
        scanf("%f", &altura);
        printf("\n");
        if(sexo == 'M' || sexo == 'm'){
            contM++;
            somaM = somaM + altura;
        }else if(sexo == 'F' || sexo == 'f'){
            contF++;
            somaF = somaF + altura;
        }
        cont++;
    }

    //Calculo Médias
    somaM = somaM / contM;
    somaF = somaF / contF;

    printf("Media de altura Mulheres: %.2f\n", somaF);
    printf("Media de altura Homens: %.2f\n\n", somaM);

    system("pause");
}