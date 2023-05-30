#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int x;
    float raizquadrada, metade;

    printf("Informe um valor para x: ");
    scanf("%i", &x);


    ///FORMULAS
    raizquadrada = sqrt(x);
    metade = x/2 + 0.5 ;

    ///CONDICAO /// Verifica se o resto da divisao e igual a 0 ou a 1
    if (x % 2 == 0)
    {
        printf("\nO numero digitado e par");
        printf("\nA raiz quadrada desse numero e igual a: %f\n\n", raizquadrada);
    }
    else
    {
        printf("\nO numero digitado e impar");
        printf("\nA metade desse numero e igual a: %.2f\n\n", metade);
    }
        system("pause");
}
