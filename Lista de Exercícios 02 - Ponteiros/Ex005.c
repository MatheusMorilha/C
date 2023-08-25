#include<stdio.h>

int primo(int m, int *p1, int *p2) {
    int i,j,cont;
    for(i=(m-1);i>=1;i--){
        cont=0;
        for(j=1;j<=(m-1);j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
                *p1 = i;
            break;
        }
    }
}
int main(){
    int m, p1, p2;

    printf("Digite um numero inteiro m: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior primo menor que %d: %d\n", m, p1);
    //printf("Menor primo maior que %d: %d\n", m, p2);

//    return 0;
}
