/*5. Faça um programa que leia uma quantidade qualquer de números armazenando-os na memória e pare
a leitura quando o usuário entrar um número negativo. Em seguida, imprima o vetor lido. Use a função
REALLOC.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
   int *vetNumeros = NULL;
   int tamanho = 0;
   int digitarNum;
   int verificador = 0;
    
    while(verificador == 0){
        printf("Digite um numero (Negativo para parar): ");
        scanf("%i", &digitarNum);

        if(digitarNum < 0){
            verificador = 1;
            break;
        }

        tamanho ++;
        vetNumeros = (int*)realloc(vetNumeros, tamanho*sizeof(int));

        if (vetNumeros == NULL){
            printf("Erro de alocacao");
            system("pause");
        }

        vetNumeros[tamanho -1] = digitarNum;
        verificador = 0;
    }

    // Imprime os números armazenados no vetor
    printf("Numeros lidos: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetNumeros[i]);
    }
    printf("\n");

    // Libera a memória alocada para o vetor
    free(vetNumeros);

    return 0;
}
    


