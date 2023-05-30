#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int b, n, calc;

    printf("Digite o valor para b: ");
    scanf("%i", &b);

    printf("Digite o valor para n: ");
    scanf("%i", &n);

    if (b>=2 && b!=0){
        if (n>1 && n!=0){

            calc = pow(b, n);
        }
    }
        printf("%valor de bn: %i", calc);

}
