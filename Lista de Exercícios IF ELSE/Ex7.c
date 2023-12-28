/*Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo feminino e tiver
menos que 25 anos, imprimir nome e a mensagem: ACEITA. Caso contrário imprimir
nome e a mensagem: NÃO ACEITA.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    char nome, sexo;
    int idade;

    printf("Informe o nome: ");
    scanf("%s", &nome);
    fflush(stdin);
    printf("\nInforme o sexo: ");
    scanf("%c", &sexo);
    printf("\nInforme a idade: ");
    scanf("%i", &idade);

    if(sexo == 'F' || sexo == 'f'){
        if(idade < 25){
            printf("\nACEITA");
        }else{
            printf("\nNAO ACEITA");
        }
    }else{
        printf("\nNAO ACEITA");
    }




}