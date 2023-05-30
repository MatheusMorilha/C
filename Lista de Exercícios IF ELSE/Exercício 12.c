#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    float co, ca, calculo, hipotenusa;

    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &co);

    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &ca);

    calculo = (co)*(co) + (ca)*(ca);
    hipotenusa = sqrt(calculo);

    printf("\nO valor da hipotenusa e igual a: %.2f\n\n", hipotenusa);

    system("pause");
}

