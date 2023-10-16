#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, **mat, i, j;
    int maior1 = 0, maior2 = 0;
    int linha_maior1, coluna_maior1, linha_maior2, coluna_maior2;

    printf("Informe o valor de N: ");
    scanf("%i", &N);

    printf("Informe o valor de M: ");
    scanf("%i", &M);

    mat = (int **)malloc(N * sizeof(int *));

    for (i = 0; i < N; i++) {
        mat[i] = (int *)malloc(M * sizeof(int));
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Posicao[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);

            if (mat[i][j] > maior1) {
                maior2 = maior1;
                linha_maior2 = linha_maior1;
                coluna_maior2 = coluna_maior1;

                maior1 = mat[i][j];
                linha_maior1 = i;
                coluna_maior1 = j;
            } else if (mat[i][j] > maior2) {
                maior2 = mat[i][j];
                linha_maior2 = i;
                coluna_maior2 = j;
            }
        }
    }

    printf("Os dois maiores numeros da matriz sao:\n");
    printf("Maior 1: %d, na linha %d e coluna %d\n", maior1, linha_maior1, coluna_maior1);
    printf("Maior 2: %d, na linha %d e coluna %d\n", maior2, linha_maior2, coluna_maior2);

    // Libera a memória alocada para a matriz
    for (i = 0; i < N; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
