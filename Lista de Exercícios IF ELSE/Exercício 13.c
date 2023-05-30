#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float salariobruto, valorprestacao, porcentagem;

    printf("Informe o valor do salario bruto: ");
    scanf("%f", &salariobruto);

    printf("Informe o valor da prestacao: ");
    scanf("%f", &valorprestacao);

    porcentagem = (salariobruto * 30) / 100; /// INFORMA QUANTO EQUIVALE 30% DESSE VALOR

    if (valorprestacao <= porcentagem)   ///O VALOR DA PRESTACAO NAO PODE PASSAR DE 30%.
    {

        printf("EMPRESTIMO CONCEDIDO\n\n"); /// PRESTACAO EQUIVALE A 30% OU MENOS
    }
    else
    {
        printf("EMPRESTIMO NAO CONCEDIDO\n\n"); ///PRESTACAO EQUIVALE MAIS DE 30%
    }
        system("pause");
}
