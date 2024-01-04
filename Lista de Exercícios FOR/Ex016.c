/*Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
Dada a massa inicial, em gramas, fazer um algoritmo que calcule o tempo necessário para que 
essa massa se torne menor que 0,5 grama. O programa em C deve escrever 
a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos. */

#include<stdio.h>
#include<stdlib.h>

int main (){
    float massa, massaInicial, segundos, minutos, horas;

    printf("Informe a massa inicial em (g): ");
    scanf("%f", &massa);

    massaInicial = massa;

    while(massa >= 0.5){
        segundos = segundos + 50;
        massa = massa / 2;
    }

    minutos = segundos/60;
    horas = minutos/60;

    printf("\nMassa Inicial: %.2f\n", massaInicial);
    printf("Massa Final: %.2f\n", massa);
    printf("\nTempo:\n");
    printf("Segundos: %.2f\n", segundos);
    printf("Minutos: %.2f\n", minutos);
    printf("Horas: %.2f\n\n", horas);

    system("pause");

}