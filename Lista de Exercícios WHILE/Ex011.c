/*Faça um programa que leia um inteiro n e imprima um triângulo retângulo formado por asteriscos. 
Ex: n = 6 
******
*****
****
***
**
*
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int n=1, cont=1;

    printf("Informe um valor para n: ");
    scanf("%i", &n);
    printf("\n");
    
    int x = n;

    while(cont <= n){
        int m=1;
        while(m <= x){
            printf("*");
            m++;
        }

        printf("\n");
        x--;
        cont++;
    }
}