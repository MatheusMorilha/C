#include <stdio.h>
#include <stdlib.h>

struct dadosProduto {
    int codigo;
    char nome[50];
    int quantidade;
    float precoVenda;
}produtos;

int main() {
    int tamanhoMax = 1;
    int tamanhoAtual = 0;
    struct dadosProduto *produtos = (struct dadosProduto *)malloc(tamanhoMax * sizeof(struct dadosProduto));

    if (produtos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    while (1) {
        printf("Informe os dados do produto %d:\n", tamanhoAtual + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[tamanhoAtual].codigo);

        printf("Nome: ");
        scanf("%s", produtos[tamanhoAtual].nome);

        printf("Quantidade disponivel no estoque: ");
        scanf("%d", &produtos[tamanhoAtual].quantidade);

        printf("Preco de venda: ");
        scanf("%f", &produtos[tamanhoAtual].precoVenda);

        tamanhoAtual++;

        if (tamanhoAtual >= tamanhoMax) {
            // Alocar mais memória usando realloc se necessário
            tamanhoMax *= 2;
            produtos = (struct dadosProduto *)realloc(produtos, tamanhoMax * sizeof(struct dadosProduto));

            if (produtos == NULL) {
                printf("Erro na alocacao de memoria.\n");
                return 1;
            }
        }

        printf("Deseja inserir outro produto? (1 - Sim / 0 - Nao): ");
        int opcao;
        scanf("%d", &opcao);
        if (opcao == 0) {
            break;
        }
    }

    // Encontrar o produto com o maior preço de venda e a maior quantidade disponível no estoque
    int indiceMaiorPreco = 0;
    int indiceMaiorQuantidade = 0;

    for (int i = 1; i < tamanhoAtual; i++) {
        if (produtos[i].precoVenda > produtos[indiceMaiorPreco].precoVenda) {
            indiceMaiorPreco = i;
        }

        if (produtos[i].quantidade > produtos[indiceMaiorQuantidade].quantidade) {
            indiceMaiorQuantidade = i;
        }
    }

    printf("\nProduto com o maior preco de venda:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorPreco].nome);
    printf("Preco de venda: %.2f\n", produtos[indiceMaiorPreco].precoVenda);

    printf("\nProduto com a maior quantidade disponivel no estoque:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("Quantidade disponivel no estoque: %d\n", produtos[indiceMaiorQuantidade].quantidade);

    // Libera a memória alocada
    free(produtos);

    return 0;
}
