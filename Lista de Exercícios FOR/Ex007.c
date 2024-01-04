/*O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025.
Fazer um programa para obter todos os números de 4 algarismos com a mesma
característica do número 3025.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int num1, num2, i, soma;

    for(i=1000; i<=9999; i++){
        num1 = i/100; //num1 = 30 -> 3025/100 = 30,25 como a variável é inteira, ela considera apenas o 30.
        num2 = i % 100; //num2 = 25 -> 3025/100 = 30,25 (aqui considera somente o resto 25).
        soma = num1 + num2;

        if(soma * soma == i){
            printf("%i ", i);
        }
    }
}