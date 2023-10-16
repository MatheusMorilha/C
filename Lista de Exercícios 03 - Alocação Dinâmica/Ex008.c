/*8. Crie um programa que declare uma estrutura (struct) para o cadastro de alunos.
a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de
nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar
os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações dos alunos;
e) Ao final, mostrar os dados armazenados e liberar a memória alocada.*/

#include<stdio.h>
#include<stdlib.h>

struct dadosAlunos {
    int matricula;
    char sobrenome[20];
    int anoNasc;
}alunos;

int main () {
    int qtdAlunos;
    int i;

    printf("Informe a quantidade de alunos que deseja cadastrar: ");
    scanf("%i", &qtdAlunos);

   struct dadosAlunos *alunos = (struct dadosAlunos *)malloc(qtdAlunos * sizeof(struct dadosAlunos));

   if (alunos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for(i=0; i<qtdAlunos; i++){
        printf("Informe os dados do Aluno [%i]\n", i + 1);
        printf("Matricula: ");
        scanf("%i", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", &alunos[i].sobrenome);
        printf("Ano Nascimento: ");
        scanf("%i", &alunos[i].anoNasc);
        printf("\n");
    }

    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < qtdAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].anoNasc);
        printf("\n");
    }

    free(alunos);

}