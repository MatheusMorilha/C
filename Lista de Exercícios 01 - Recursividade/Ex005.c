#include<stdio.h>
#include<stdlib.h>

int comb(int n, int k){
    if (k == 1){
        return n;
    }else if(k == n){
        return 1;
    }else if (k>1 && n<k){
        return comb(n-1,k-1)+comb(n-1,k);
    }else{
        return 0;
    }
}
int main () {
    int n, k;

    printf("Informe a quantidade de pessoas por grupo: ");
    scanf("%i", &n);

    printf("Informe a quantidade de pessoas disponiveis: ");
    scanf("%i", &k);

    printf("Resultado: %i", comb(n,k));
}

