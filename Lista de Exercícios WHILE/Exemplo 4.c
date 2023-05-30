#include<stdio.h>
#include<stdlib.h>

int main () {
    char op, sexo;
    float altura, peso;
    do{
        printf("Qual sexo? F / M\n");
        scanf("%s", &sexo);
        printf("Qual altura?\n");
        scanf("%f", &altura);
        if (sexo == 'f' || sexo == 'F') {
            peso = (62.1 * altura) - 44.7;
        }else{
            peso = (72.7 * altura) - 58;
            }
        printf("Seu peso ideal e %f\n", peso);
        printf("Deseja fazer novo calculo? S \ N... \n");
        scanf("%s", &op);

    }while(op == 'S'|| op == 's');
    system ("pause");





















}
