#include <stdio.h>
#include <string.h>

// Função para encontrar a posição de um caractere em uma string
int encontrarCaractere(const char *string, char caractere) {
    int comprimento = strlen(string);
    
    for (int i = 0; i < comprimento; i++) {
        if (string[i] == caractere) {
            return i; // Retorna a posição do caractere encontrado
        }
    }
    
    return -1; // Retorna -1 se o caractere não for encontrado na string
}

int main() {
    char minhaString[] = "Elepisia";
    char caractereProcurado = 'p';

    int posicao = encontrarCaractere(minhaString, caractereProcurado);

    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", caractereProcurado, posicao);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractereProcurado);
    }

    return 0;
}
