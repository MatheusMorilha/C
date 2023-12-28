/*Fazer um programa que possa converter uma determinada quantia dada em reais para uma das seguintes moedas:
 • F – franco suíço • L – libra esterlina • D – dólar • M – marco alemão (consultar na internet os valores atuais de cada moeda) */

 #include<stdio.h>
 #include<stdlib.h>

 int main () {
    float reais, total;
    char tipoMoeda;

    printf("Informe a quantia em reais (R$): ");
    scanf("%f", &reais);
    printf("\nSelecione a moeda que deseja converter:\n");
    printf("F - Franco Suico\n");
    printf("L - Libra Esterlina\n");
    printf("D - Dolar\n");
    printf("M - Marco Alemao\n");
    printf(">> ");
    fflush(stdin);
    scanf("%c", &tipoMoeda);

    if(reais > 0){
         if(tipoMoeda == 'f' || tipoMoeda == 'F'){
            total = reais / 5.77;
        }else if(tipoMoeda == 'l' || tipoMoeda == 'L'){
            total = reais / 6.18;
        }else if(tipoMoeda == 'd' || tipoMoeda == 'D'){
            total = reais / 4.85;   
        }else if(tipoMoeda == 'm' || tipoMoeda == 'M'){
            total = reais / 2.75;
        }else{
            printf("\nOpcao Invalida!\n\n");
        }
    }else{
        printf("\nA quantia deve ser maior que zero\n\n");
    }

    printf("\nValor Convertido: %.2f\n\n", total);
}