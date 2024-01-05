/*Solicitar ao usuário a digitação de vários números. O programa deve
parar quanto for digitado um número negativo.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int num;

    printf("Digite um numero negativo para encerrar\n\n");

    while(num >= 0){
        printf("Digite um numero: ");
        scanf("%i", &num);
    }

    system("pause");
}