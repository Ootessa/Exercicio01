#include <stdio.h>

int main() {
    int i, j, linhas, colunas;

    // Solicita o número de linhas e colunas da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
  
    // Preenche a matriz a partir da entrada do usuário
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
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

        // Multiplica a linha pelo multiplicador
        for (j = 0; j < colunas; j++) {
            matriz[linha - 1][j] *= multiplicador;
        }
    } else if (escolha == 2) {
        int coluna, multiplicador;
        printf("Digite o número da coluna que deseja multiplicar: ");
        scanf("%d", &coluna);
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);

        // Multiplica a coluna pelo multiplicador
        for (i = 0; i < linhas; i++) {
            matriz[i][coluna - 1] *= multiplicador;
        }
    } else {
        printf("Escolha inválida.\n");
        return 1;
    }

    // Imprime a matriz resultante
    printf("Matriz resultante:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
