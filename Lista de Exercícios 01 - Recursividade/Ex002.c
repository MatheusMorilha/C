#include<stdio.h>

int power (int x, int n){
    int resultado;

    if(n==0){
        resultado=1; // O valor é 1 pois é um elemento neutro para multiplicação
    }else{
        return resultado = x * power (x, n - 1);
    }

    return resultado;
}

int main () {
    int x, n, resultado;

    printf("Informe um inteiro para X: ");
    scanf("%i", &x);
    printf("Informe um inteiro para N: ");
    scanf("%i", &n);


    printf("Resultado: %i\n\n", power(x, n));

    system("pause");
}
