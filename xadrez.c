#include <stdio.h>

int main() {

 #include <stdio.h>

int main() {
    int i;
    int escolha;
    
    printf("***MOVIMENTO DE PEÇAS DE XADREZ ***\n");
    printf("Escolha a peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Cavalo\n");
    printf("4 - Rainha\n");
    printf("Digite sua escolha (1-4):");
    scanf("%d", &escolha);
    
    printf("\n");
    
    switch(escolha) {
        case 1: 
            printf("Movimento da Torre (5 casas para a direita):\n");
            for(i = 0; i < 5; i++) {
                printf("Direita\n");
            }
            break;
            
        case 2: 
            printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
            for(i = 0; i < 5; i++) {
                printf("Cima, Direita\n");
            }
            break;
            
        case 3: 
            printf("Movimentação do Cavalo (2 casas para baixo e uma para a esquerda):\n");
            for(i = 0; i < 2; i++) {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
            break;
            
        case 4:
            printf("Movimento da Rainha (8 casas para a esquerda):\n");
            for(i = 0; i < 8; i++) {
                printf("Esquerda\n");
            }
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    return 0;
}
