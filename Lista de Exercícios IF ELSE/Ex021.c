/*Ler três valores inteiro (variáveis A, B, e C) e efetuar o calculo da equação de segundo grau, apresentando: se para os valores 
informados for possível fazer os cálculos (delta positivo ou zero) apresentar mensagem “O valor de Delta é ...”;
a mensagem “Não há raízes reais”, se não for possível fazer o calculo (delta negativo); e a mensagem “Não é equação de segundo grau”,
se o valor de A for igual à zero.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int a, b, c;
    float delta;

    printf("Informe o valor de a: ");
    scanf("%i", &a);
    printf("Informe o valor de b: ");
    scanf("%i", &b);
    printf("Informe o valor de c: ");
    scanf("%i", &c);

    if(a != 0){
        delta = pow(b,2) - 4 * a * c;
        if(delta >= 0){
            printf("\nDelta: %.2f\n\n", delta);
        }else{
            printf("\nNao ha raizes reais\n\n");
        }
    }else{
        printf("Nao e equacao de segundo grau\n\n");
    }

    system("pause");

    
}