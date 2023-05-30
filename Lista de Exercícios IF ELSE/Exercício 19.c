#include<stdio.h>
#include<stdlib.h>

int main () {
    float quantidadelitros, precocombustivel, valoraserpago, gasolina, etanol;
    char tipocombustivel;

    gasolina = 4.40;
    etanol = 2.90;

    printf("COMBUSTIVEIS\n\n");
    printf("E - para Etanol\n");
    printf("G - para Gasolina\n\n");
    printf("Escolha uma opcao: ");
    scanf("%c", &tipocombustivel);

    printf("Informe a quantidade de litros desejados: ");
    scanf("%f", &quantidadelitros);

    if (tipocombustivel == 'e' || tipocombustivel == 'E') {

        if (quantidadelitros <= 20){
            precocombustivel = 2.90 - (2.90 * (3/100));
            printf("\nVoce ganhou 3 por cento de desconto\n\n");
            valoraserpago = precocombustivel * quantidadelitros;
            printf("\nValor total a pagar: R$ %.2f\n\n", valoraserpago);

        }else if (quantidadelitros > 20){
            precocombustivel = 2.90 - (2.90 * (5/100));
            printf("\nVoce ganhou 5 por cento de desconto\n\n");
            valoraserpago = precocombustivel * quantidadelitros;
            printf("\nValor total a pagar: R$ %.2f\n\n", valoraserpago);
        }





    }else if (tipocombustivel == 'g' || tipocombustivel == 'G') {
            if (quantidadelitros <= 20){
            precocombustivel = 4.40 - (4.40 * (4/100));
            printf("\nVoce ganhou 4 por cento de desconto\n\n");
            valoraserpago = precocombustivel * quantidadelitros;
            printf("\nValor total a pagar: R$ %.2f\n\n", valoraserpago);

        }else if (quantidadelitros > 20){
            precocombustivel = 4.40 - (4.40 * (6/100));
            printf("\nVoce ganhou 6 por cento de desconto\n\n");
            valoraserpago = precocombustivel * quantidadelitros;
            printf("\nValor total a pagar: R$ %.2f\n\n", valoraserpago);
        }

            system("pause");
    }


}
