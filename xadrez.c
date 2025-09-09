#include <stdio.h>
#include <time.h>

void mtorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        mtorre(casas - 1);
    }
}

void mbispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        mbispo(casas - 1);
    }
}

void mrainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mrainha(casas - 1);
    }
}

void mcavalo() {
    int i, j;
    int casas_cima = 2;    
    int casas_direita = 1; 
    
    printf("Movimentação do Cavalo (2 casas para cima e 1 para a direita):\n");
    
    for (i = 0; i < casas_cima; i++) {
      
        if (i >= casas_cima) {
            break;  
        }
        
        printf("Cima\n");
        
        for (j = 0; j < casas_direita; j++) {
        
            if (i == casas_cima - 1) {
                printf("Direita\n");
            } else {
                continue;
            }
        }
    }
}

void mbispoloops() {
    int casas = 5;
    int i, j;
    
    printf("\nMovimento do Bispo com loops aninhados (%d casas na diagonal):\n", casas);
    
    for (i = 0; i < casas; i++) {
        
        for (j = 0; j < casas; j++) {
            
            if (i == j) {
                printf("Cima, Direita\n");
                break;  
            }
        }
    }
}

int main() {
    int escolha;
    const int casas_torre = 5; 
    const int casas_bispo = 5;      
    const int casas_rainha = 8;     
    printf("*** MOVIMENTO DE PEÇAS DE XADREZ ***\n");
    printf("Escolha a peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Cavalo\n");
    printf("4 - Rainha\n");
    printf("Digite sua escolha (1-4): ");
    scanf("%d", &escolha);
    
    printf("\n");
    
    switch(escolha) {
        case 1: 
            printf("Movimento da Torre (%d casas para a direita):\n", casas_torre);
            mtorre(casas_torre);
            break;
            
        case 2: 
            printf("Movimento do Bispo (%d casas na diagonal superior direita):\n", casas_bispo);
            mbispo(casas_bispo);
            mbispoloops();
            break;
            
        case 3: 
            mcavalo();
            break;
            
        case 4:
            printf("Movimento da Rainha (%d casas para a esquerda):\n", casas_rainha);
            mrainha(casas_rainha);
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}
