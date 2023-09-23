#include <stdio.h>

int main() {
    int numeroMaximo;

    printf("Digite um número máximo (deve ser ímpar): ");
    scanf("%d", &numeroMaximo);

    // Verifica se o número é ímpar; se não for, incrementa para torná-lo ímpar
    while (numeroMaximo % 2 == 0) {
        printf("Numero recebido invalido, digite outro numero que seja ímpar.");
        scanf("%d", &numeroMaximo);
    }

int maximotemporario = numeroMaximo;
  
    // Loop externo controla o número de linhas
    for (int i = 1; i <= numeroMaximo; i++) {
        // Loop interno para imprimir espaços
        for (int j = 1; j < i; j++) {
            printf("  ");
        }

        // Loop interno para imprimir os números
        for (int k = i; k <= maximotemporario; k++) {
            printf("%d ", k);
        }

      maximotemporario--;

        printf("\n");
    }

    return 0;
}
