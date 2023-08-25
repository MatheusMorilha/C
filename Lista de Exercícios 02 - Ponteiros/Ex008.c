#include<stdio.h>
#include<stdlib.h>

void converteHora(int totalSegundos, int *hora, int *min, int *seg){
    *hora = totalSegundos/3600;
    totalSegundos = totalSegundos%3600;
    *min = totalSegundos / 60;
    *seg = totalSegundos % 60;
}

int main () {
    int segundos;
    int hora;
    int min;
    int seg;

    printf("Informe o total de segundos para converter em HH MM SS: ");
    scanf("%i", &segundos);

    converteHora(segundos, &hora, &min, &seg);

    printf("Resultado da conversao: %.2i:%.2i:%.2i\n", hora, min, seg);
}
