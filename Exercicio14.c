#include <stdio.h>
#include <string.h>

// Função para inserir um caractere em uma string na posição especificada
void inserirCaractere(char str[], char caractere, int posicao) {
    int comprimento = strlen(str);

    if (posicao >= 0 && posicao <= comprimento) {
        // Desloca os caracteres à direita para abrir espaço para o novo caractere
        for (int i = comprimento; i >= posicao; i--) {
            str[i + 1] = str[i];
        }

        // Insere o novo caractere na posição especificada
        str[posicao] = caractere;
    }
}

int main() {
    char minhaString[100];
    char caractere;
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    printf("Digite o caractere a ser inserido: ");
    scanf(" %c", &caractere); // Usamos " %c" para ignorar espaços em branco

    printf("Digite a posição de inserção (0-based): ");
    scanf("%d", &posicao);

    inserirCaractere(minhaString, caractere, posicao - 1);

    printf("String após a inserção: %s\n", minhaString);

    return 0;
}
