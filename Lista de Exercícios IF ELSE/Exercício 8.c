#include<stdio.h>
#include<stdlib.h>

int main () {
    float custoproduto, lucro1, lucro2, precovenda1, precovenda2;

    printf("Informe o custo do produto em R$: ");
    scanf("%f", &custoproduto);

    lucro1 = (custoproduto * 45)/100;
    precovenda1 = custoproduto + lucro1;
    lucro2 = (custoproduto * 30)/100;
    precovenda2 = custoproduto + lucro2;

    if(custoproduto <= 20) {

        printf("\nValor do produto R$ %.2f\n", custoproduto);
        printf("O preco de venda desse produto sera: R$ %.2f\n\n", precovenda1);

    }else{

        printf("\nValor do produto: R$ %.2f\n", custoproduto);
        printf("O preco de venda desse produto sera: R$ %.2f\n\n", precovenda2);


    }

        system("pause");


}
