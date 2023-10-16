/*2. Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar
dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa
imprime a string sem suas vogais.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    char *string;
    int tamanho, i;

    printf("Informe o tamanho da String: ");
    scanf("%i", &tamanho);

    string = (char*) malloc(tamanho*sizeof(char));

        if(string == 0){
            printf("Erro de alocacao de memoria");
            return 0;
        }

    for(i=0;i<tamanho;i++){
        printf("Digite a palavra desejada: ");
        scanf("%s", &string[i]);

    }
        printf("\nString sem vogais:\n");
    for(i=0;i<tamanho;i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
        string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            
        }else{
            printf("%c", string[i]);
        }
    }
    
    free(string);
    return 0;


}