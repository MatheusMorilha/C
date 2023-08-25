#include<stdio.h>


int somaDigitos (int numero){
    if (numero <10){
        return numero;
    }else{
        int soma = somaDigitos (numero/10);
        return soma + numero%10;
    }
}

int main () {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    int resultado = somaDigitos(numero);
    printf("A soma dos digitos de %d e: %d\n", numero, resultado);

    return 0;

}
