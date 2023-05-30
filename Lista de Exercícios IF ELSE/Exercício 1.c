#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () {
    float x, triplo, elevado;

    printf("Informe um valor para x: ");
    scanf("%f", &x);

    if(x > 0){ /// SE FOR POSITIVO, MULTIPLICA O X POR 3
        printf("\nPOSITIVO\n");
        triplo = x * 3;
        printf("\no triplo de x e igual a: %.2f\n\n", triplo);

    }else{ ///SE FOR NEGATIVO, ELEVARA O X POR 2
        elevado = pow(x,2);
        printf("\nNEGATIVO\n\n");
        printf("o x elevado a potencia 2 e igual a: %.2f\n\n", elevado);


    }
    system("pause");


}
