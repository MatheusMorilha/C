#include<stdio.h>
#include<stdlib.h>

int main () {
    int x, y, i, z, f;

    printf("Informe um valor para x: ");
    scanf("%i", &x);
    printf("Informe um valor para y: ");
    scanf("%i", &y);

    for (i=0; i<10; i++){
        z = x+y;
        printf("%i  ", z);
        x = y;
        y=z;
    }





}
