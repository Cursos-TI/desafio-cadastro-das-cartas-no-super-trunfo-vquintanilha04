#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
} Carta;

int main() {
    Carta carta1, carta2;
    int opcao;
    
    carta1.estado[0] = 'A';
    carta1.estado[1] = '\0';
    
    carta1.codigo[0] = 'A';
    carta1.codigo[1] = '0';
    carta1.codigo[2] = '1';
    carta1.codigo[3] = '\0';
    
    sprintf(carta1.cidade, "Sao Paulo");
    
    carta1.populacao = 12325000;
    carta1.area = 1521.11;
    carta1.pib = 699.28;
    carta1.pontos_turisticos = 50;
    carta1.densidade = carta1.populacao / carta1.area;
    
    carta2.estado[0] = 'B';
    carta2.estado[1] = '\0';
    
    carta2.codigo[0] = 'B';
    carta2.codigo[1] = '0';
    carta2.codigo[2] = '2';
    carta2.codigo[3] = '\0';
    
    sprintf(carta2.cidade, "Rio de Janeiro");
    
    carta2.populacao = 6748000;
    carta2.area = 1200.25;
    carta2.pib = 300.50;
    carta2.pontos_turisticos = 30;
    carta2.densidade = carta2.populacao / carta2.area;
    
    printf("\n*** SUPER TRUNFO ***\n");
    printf("1. Comparar por POPULACAO\n");
    printf("2. Comparar por AREA\n");
    printf("3. Comparar por PIB\n");
    printf("4. Comparar por PONTOS TURISTICOS\n");
    printf("5. Comparar por DENSIDADE\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        printf("\n*** POPULAÇÃO ***\n");
        printf("%s: %d habitantes\n", carta1.cidade, carta1.populacao);
        printf("%s: %d habitantes\n", carta2.cidade, carta2.populacao);
        
        if (carta1.populacao > carta2.populacao) {
            printf("Vencedor: %s\n", carta1.cidade);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Vencedor: %s\n", carta2.cidade);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 2) {
        printf("\n--- AREA ---\n");
        printf("%s: %.2f km2\n", carta1.cidade, carta1.area);
        printf("%s: %.2f km2\n", carta2.cidade, carta2.area);
        
        if (carta1.area > carta2.area) {
            printf("Vencedor: %s\n", carta1.cidade);
        } else if (carta2.area > carta1.area) {
            printf("Vencedor: %s\n", carta2.cidade);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 3) {
        printf("\n--- PIB ---\n");
        printf("%s: %.2f bilhões\n", carta1.cidade, carta1.pib);
        printf("%s: %.2f bilhões\n", carta2.cidade, carta2.pib);
        
        if (carta1.pib > carta2.pib) {
            printf("Vencedor: %s\n", carta1.cidade);
        } else if (carta2.pib > carta1.pib) {
            printf("Vencedor: %s\n", carta2.cidade);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 4) {
        printf("\n--- PONTOS TURÍSTICOS ---\n");
        printf("%s: %d pontos\n", carta1.cidade, carta1.pontos_turisticos);
        printf("%s: %d pontos\n", carta2.cidade, carta2.pontos_turisticos);
        
        if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
            printf("Vencedor: %s\n", carta1.cidade);
        } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
            printf("Vencedor: %s\n", carta2.cidade);
        } else {
            printf("Empate!\n");
        }
    }
    else if (opcao == 5) {
        printf("\n*** DENSIDADE DEMOGRAFICA ***\n");
        printf("%s: %.2f hab/km²\n", carta1.cidade, carta1.densidade);
        printf("%s: %.2f hab/km²\n", carta2.cidade, carta2.densidade);
        
        if (carta1.densidade < carta2.densidade) {
            printf("Vencedor: %s (menor densidade)\n", carta1.cidade);
        } else if (carta2.densidade < carta1.densidade) {
            printf("Vencedor: %s (menor densidade)\n", carta2.cidade);
        } else {
            printf("Empate!\n");
        }
    }
    else {
        printf("Opção invalida!\n");
    }
    return 0;
}
