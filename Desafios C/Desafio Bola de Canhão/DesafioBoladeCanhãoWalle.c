#include<stdio.h>
#include<stdlib.h>

///DESAFIO TETRAEDRO WALL-E

int main () {
  int numero, contbase, calculobase, contcamadas, calculoscamadas, soma=0, somacamadas=0;

    printf("Digite o valor da lateral do tetraedro:\n");
    scanf("%i", &numero);

    contbase = numero;
    contcamadas = numero;

while (contcamadas >=1){

    while (contbase >= 1){
        calculobase = numero - 1;
        numero = calculobase;
        soma = soma + contbase;
        contbase--;

    }
    contcamadas = contcamadas - 1;
    contbase = contcamadas;
}

    printf("\nA quantidade de copos usados no total e igual a: \n%i", soma);

    printf("\n\n");
    system("pause");

}
