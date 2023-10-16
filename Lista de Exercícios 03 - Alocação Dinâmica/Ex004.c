/*4. Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu
bilhete. O programa então compara quantos números o jogador acertou. Em seguida, ele aloca espaço para
um vetor de tamanho igual a quantidade de números corretos e guarda os números corretos nesse vetor.
Finalmente, o programa exibe os números sorteados e os seus números corretos.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int loteria[6], bilhete[6], i, y, cont=0, *vet;
    srand(time(NULL));

        for(y=0;y<6;y++){
            loteria[y] = rand()%100;
        }
    
    printf("Informe os seus numeros:\n\n");
        for(i=0;i<6;i++){
            printf("Numero [%i]: ", i+1);
            scanf("%i", &bilhete[i]);
        }

        for(i=0;i<6;i++){
            for(y=0;y<6;y++){
                if (bilhete[i] == loteria[y]){
                    cont++;
                }
            }
        }

    if(cont>=1){

        vet = (int*) malloc(cont * sizeof(int));

        int vetIndex = 0; 

        for (i = 0; i < 6; i++) {
            for (y = 0; y < 6; y++) {
                if (bilhete[i] == loteria[y]) {
                    vet[vetIndex] = bilhete[i];
                    vetIndex++; 
                }
            }
        }
    
        printf("\n\nNumeros sorteados - LOTERIA\n\n");
            for(y=0;y<6;y++){
                printf("Numero[%i]: %i\n", y+1, loteria[y]);
            }

    
        printf("\n\nNumeros Corretos!\n");
            for(i=0;i<cont;i++){
                printf("Numero[%i]: %i\n", i+1, vet[i]);
            }
        }else{
            printf("\nInfelizmente voce nao acertou nenhum numero!\n\n");
        }

    free(vet);
    return 0;

}