#include <stdio.h>

int main() {

    int i, torre, bispo, rainha;

    printf("Movimento da Torre (5 casas para a direita):\n");
    for (torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    printf("Movimento do Bispo (5 casas na diagonal cima/direita):\n");
    bispo = 0;
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }
    
    printf("\n"); 

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    rainha = 0;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);
    
    return 0;
}
