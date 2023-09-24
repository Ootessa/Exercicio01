#include <stdio.h>

void matrizTransposta(int matriz[][100], int linhas, int colunas, int transposta[][100]) {
    int i, j;

    // Calcula a matriz transposta
    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[100][100];
    int transposta[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    matrizTransposta(matriz, linhas, colunas, transposta);

    printf("Matriz Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
