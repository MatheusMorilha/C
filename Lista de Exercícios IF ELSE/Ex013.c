/*.A prefeitura de Cascavel abriu uma linha de crédito para os funcionários estatutários. O
valor máximo da prestação não poderá ultrapassar 30% do salario bruto. Fazer um
algoritmo que permita entrar com o salario bruto e o valor da prestação e informar se o
empréstimo pode ou não ser concedido.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    float salarioBruto, valorPrestacao;

    printf("Informe o salario bruto: ");
    scanf("%f", &salarioBruto);
    printf("\nInforme o valor da prestacao: ");
    scanf("%f", &valorPrestacao);

    if(salarioBruto > 0 && valorPrestacao > 0){
        if(valorPrestacao > (salarioBruto * 30)/100){
            printf("\nO emprestimo nao pode ser concedido\n\n");
        }else{
            printf("\nO emprestimo pode ser concedido\n\n");
        }
    }else{
        printf("\nSalario ou Prestacao com valores incorretos!\n\n");
    }
    system("pause");
}