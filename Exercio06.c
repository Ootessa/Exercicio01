#include <stdio.h>

int main() {
    int i, j, linhas, colunas;

    // Solicita o número de linhas e colunas da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
    int transposta[colunas][linhas];  // Matriz transposta tem o número de linhas e colunas invertidos

    // Preenche a matriz a partir da entrada do usuário
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a matriz transposta
    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    // Imprime a matriz transposta
    printf("Matriz Transposta:\n");
    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

