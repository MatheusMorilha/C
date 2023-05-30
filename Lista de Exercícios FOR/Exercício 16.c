#include<stdio.h>
#include<stdlib.h>

int main () {
    float x, y, minutos, horas;
    int segundos=0;

    printf("Informe a massa desse material em gramas: ");
    scanf("%f", &x);

    while (x >= 0.5){
        x = x/2;
        segundos = segundos + 50;
    }
        minutos = segundos/60;
        horas = minutos/60;
    printf("\nA massa final e: %f\n", x);
    printf("\nO tempo em segundos e igual: %i", segundos);
    printf("\nO tempo em minutos e igual: %f", minutos);
    printf("\nO tempo em horas e igual: %f\n\n", horas);

    system("pause");
}
