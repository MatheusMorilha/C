#include<stdio.h>
#include<stdlib.h>

int main () {
    int num;
int a,b,soma,quadrado;


 for(num=1000;num<=9999;num++) {
	  a = num / 100; ///30
	  b = num % 100; ///25 - RESTO

	  soma = a+b;
	  quadrado = soma*soma;
	  if (quadrado == num) ///VERIFICAR CARACTERISTICAS
			  printf("%d + %d = %d * %d = %d\n",a,b,soma,soma,num);

    }
}
