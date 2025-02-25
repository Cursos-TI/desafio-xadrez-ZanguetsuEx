#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Direita\n");    // Movimento da Torre
    moverTorre(casas - 1);  // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n"); // Movimento do Bispo
    moverBispo(casas - 1);    // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Esquerda\n");   // Movimento da Rainha
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo com loops complexos
void moverCavalo() {
    for (int i = 1; i <= 2; i++) { // Loop para 2 casas para cima
        printf("Cima\n");
        if (i == 2) { // Condição para o movimento em "L"
            for (int j = 1; j <= 1; j++) { // Loop para 1 casa para a direita
                printf("Direita\n");
            }
        }
    }
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    for (int vertical = 1; vertical <= 5; vertical++) { // Loop vertical
        for (int horizontal = 1; horizontal <= 5; horizontal++) { // Loop horizontal
            if (vertical == horizontal) { // Condição para movimento diagonal
                printf("Cima, Direita\n");
                break; // Sai do loop interno após imprimir o movimento
            }
        }
    }
}

int main() {
    // Definindo o número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(casasBispo);
    printf("\n");

    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo (loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    // Movimento do Bispo (loops aninhados)
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops();
    printf("\n");

    return 0;
}