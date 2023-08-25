#include<stdio.h>

int somatoria (int n){
    if(n==0){
        return 0; // O valor é zero pois 0 é o elemento neutro para soma
    }else{
        return(n+somatoria(n-1));
    }

}

int main (){
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%i", &n);
    printf("Somatoria: %i", somatoria(n));

}
