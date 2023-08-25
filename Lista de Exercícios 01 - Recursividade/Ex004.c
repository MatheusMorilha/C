#include<stdio.h>

int Multip_Rec(int n1, int n2){
    if (n2 == 0){
        return 0;
    }else{
        return n1 + Multip_Rec(n1, n2 - 1);
    }
}

int main () {
    int n1, n2, resultado;

    printf("Informe um numero: ");
    scanf("%i", &n1);

    printf("Informe o multiplicador: ");
    scanf("%i", &n2);

    resultado = Multip_Rec(n1, n2);

    printf("\nO resultado da operacao e: %i\n\n", resultado);

    system("pause");
}
