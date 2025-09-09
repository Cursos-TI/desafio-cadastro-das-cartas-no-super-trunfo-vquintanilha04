#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        tabuleiro[2][4 + j] = 7;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][1] = 7;
    }

    printf("\n\n       *** BATALHA NAVAL ***\n\n");

    printf("   "); 
    for (int j = 0; j < 10; j++) {
        printf("%2c ", 'A' + j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
