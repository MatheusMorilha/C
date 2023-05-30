#include<stdio.h>
#include<stdlib.h>

int main () {
   int a, b, c;

   printf("Informe um valor para a b c: \n");
   scanf("%i%i%i", &a, &b, &c);

   if (a<=b && a<=c) {/// a e o menor de todos
        if(b<c){
            printf("%i, %i, %i", a, b, c);
        }else{
            printf("%i, %i, %i", a, c, b);
        }




    }else if (b<=a && b<=c){ /// b e o menor de todos
            if (a<c) {
            printf("%i, %i, %i", b, a, c);
        }else{
            printf("%i, %i, %i", b, c, a);
        }


    }else if(c<=a && c<=b){//se C menor de todos
        if(b<a){
            printf("%i, %i, %i\n",c,b,a);
        }else{
            printf("%i, %i, %i\n",c,a,b);
        }
    }











}
