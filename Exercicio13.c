#include <stdio.h>
#include <string.h>

// Função para remover um caractere de uma string dada a posição
void removerCaractere(char str[], int posicao) {
    int comprimento = strlen(str);

    if (posicao >= 0 && posicao < comprimento) {
        for (int i = posicao; i < comprimento - 1; i++) {
            str[i] = str[i + 1]; // Move os caracteres à direita para preencher o espaço
        }
        str[comprimento - 1] = '\0'; // Define o último caractere como nulo para ajustar o comprimento da string
    }
}

int main() {
    char minhaString[100];
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    printf("Digite a posição do caractere a ser removido (0-based): ");
    scanf("%d", &posicao);

    removerCaractere(minhaString, posicao - 1);

    printf("String após a remoção: %s\n", minhaString);

    return 0;
}
