#include <stdio.h>

// Função para multiplicar uma linha de uma matriz por um número
void multiplicarLinhaPorNumero(int matriz[][100], int linha, int colunas, int multiplicador) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= multiplicador;
    }
}

// Função para multiplicar uma coluna de uma matriz por um número
void multiplicarColunaPorNumero(int matriz[][100], int linhas, int coluna, int multiplicador) {
    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna] *= multiplicador;
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int escolha;
    printf("Digite 1 para multiplicar uma linha ou 2 para multiplicar uma coluna: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        int linha, multiplicador;
        printf("Digite o número da linha que deseja multiplicar: ");
        scanf("%d", &linha);
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);

        multiplicarLinhaPorNumero(matriz, linha - 1, colunas, multiplicador);
    } else if (escolha == 2) {
        int coluna, multiplicador;
        printf("Digite o número da coluna que deseja multiplicar: ");
        scanf("%d", &coluna);
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);

        multiplicarColunaPorNumero(matriz, linhas, coluna - 1, multiplicador);
    } else {
        printf("Escolha inválida.\n");
        return 1;
    }

    // Imprime a matriz resultante após a multiplicação
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
