#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int casa = 1;
    while (casa <= 5) {
        printf("Cima, Direita\n");
        casa++;
    }

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int passo = 1;
    do {
        printf("Esquerda\n");
        passo++;
    } while (passo <= 8);

    // Simulação do movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // Loop para as duas casas para baixo
        printf("Baixo\n");
    }
    int j = 1;
    while (j <= 1) { // Loop para uma casa para a esquerda
        printf("Esquerda\n");
        j++;
    }

    return 0;
}