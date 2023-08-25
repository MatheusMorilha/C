#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calc_esfera(float R, float *area, float *volume){
    float pi = 3.14;
    *area = 4 * pi * pow(R,2);
    *volume = (4.0/3.0) * pi * pow(R,3);

}

int main () {
    float raio;
    float area;
    float volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area: %.2f\n", area);
    printf("Volume: %.2f", volume);


}
