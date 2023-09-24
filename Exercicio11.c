#include <stdio.h>

// Função para somar os elementos das linhas L1 e L2 e colocar o resultado em L2
void somarLinhas(int matriz[][100], int colunas, int L1, int L2) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] += matriz[L1][j];
    }
}

// Função para multiplicar os elementos das linhas L1 e L2 e colocar o resultado em L2
void multiplicarLinhas(int matriz[][100], int colunas, int L1, int L2) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] *= matriz[L1][j];
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
    printf("Digite 1 para somar as linhas ou 2 para multiplicar as linhas: ");
    scanf("%d", &escolha);

    if (escolha == 1 || escolha == 2) {
        int L1, L2;
        printf("Digite o número da primeira linha (L1): ");
        scanf("%d", &L1);
        printf("Digite o número da segunda linha (L2): ");
        scanf("%d", &L2);

        if (L1 >= 0 && L1 < linhas && L2 >= 0 && L2 < linhas) {
            if (escolha == 1) {
                somarLinhas(matriz, colunas, L1 - 1, L2 - 1);
            } else {
                multiplicarLinhas(matriz, colunas, L1 - 1, L2 - 1);
            }

            // Imprime a matriz resultante após a operação
            printf("Matriz resultante:\n");
            for (int i = 0; i < linhas; i++) {
                for (int j = 0; j < colunas; j++) {
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("Linhas fora dos limites da matriz.\n");
            return 1;
        }
    } else {
        printf("Escolha inválida.\n");
        return 1;
    }

    return 0;
}
