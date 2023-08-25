#include<stdio.h>

int boladeCanhao (int lateral) {
    if (lateral==0){
        return 0;
    }else{
        return (lateral * (lateral + 1)) / 2 + boladeCanhao(lateral - 1);
    }
}

int main () {
    int lateral, totalCopos;

    printf("Valor da lateral: ");
    scanf("%i", &lateral);

    totalCopos = boladeCanhao(lateral);

    printf("Numero de copos: %i", totalCopos);

}