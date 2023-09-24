#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float peso;
    float altura;
};

int main() {
    // Cria um vetor de três pessoas
    struct Pessoa pessoas[3];

    // Solicita ao usuário que insira os dados das pessoas
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite o peso (em kg) da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].peso);
        printf("Digite a altura (em metros) da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }

    // Imprime os dados de todas as pessoas
    printf("\nDados das pessoas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("Altura: %.2f metros\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}
