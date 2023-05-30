#include<stdio.h>
#include<stdlib.h>

int main () {
    float altura, pesoideal;
    char nome, sexo;

    printf("Informe o seu sexo M/F: ");
    scanf("%c", &sexo);
    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'm' || sexo == 'M'){
        pesoideal = (72.7 * altura) - 58;
        printf("\nO seu peso ideal e igual a: %.2f KG\n\n", pesoideal);

    }else if (sexo == 'f' || sexo == 'F'){
        pesoideal = (62.1 * altura) - 44.7;
        printf("\nO seu peso ideal e igual a: %.2f KG\n\n", pesoideal);
    }
        system("pause");
}
