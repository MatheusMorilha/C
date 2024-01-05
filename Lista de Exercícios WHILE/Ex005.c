/*Solicitar ao usuário que escolha um número para que seja exibida a sua
tabuada na tela.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int num, cont=1, resultado;

    printf("Informe um numero: ");
    scanf("%i", &num);

    while(cont <= 10){
        resultado = num * cont;
        printf("%i x %i = %i\n", num, cont, resultado);
        cont++;
    }

    system("pause");

}
