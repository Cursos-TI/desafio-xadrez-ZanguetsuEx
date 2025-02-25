#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    int casa = 1;
    while (casa <= 5) {
        printf("Cima, Direita\n");
        casa++;
    }

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    int passo = 1;
    do {
        printf("Esquerda\n");
        passo++;
    } while (passo <= 8);

    return 0;
}