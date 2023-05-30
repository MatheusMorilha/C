#include<stdio.h>
#include<stdlib.h>

int main () {
    int i, n;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    for (i=1; i<n; i++){
        if (i%2==0){
            printf("%i\n", i);
        }
    }
    printf("\n");
    for (i=1; i<n; i++){
        if (i%2==1){
            printf("%i\n", i);
        }
    }

}
