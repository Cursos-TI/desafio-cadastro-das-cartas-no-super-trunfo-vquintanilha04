#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[3];               
    char codigo[10];              
    char cidade[50];              
    int populacao;                
    float area;                   
    float pib;                    
    int pontos_turisticos;        
    float densidade_populacional; 
    float pib_per_capita;         
} CartaSuperTrunfo;


float calcular_densidade(int populacao, float area) {
    if (area == 0) return 0; 
    return populacao / area;
}

float calcular_pib_per_capita(float pib, int populacao) {
    if (populacao == 0) return 0;
    return (pib * 1000000) / populacao; 
}

void cadastrar_carta(CartaSuperTrunfo *carta, char estado[], char codigo[], char cidade[], 
                    int populacao, float area, float pib, int pontos_turisticos) {
    strcpy(carta->estado, estado);
    strcpy(carta->codigo, codigo);
    strcpy(carta->cidade, cidade);
    carta->populacao = populacao;
    carta->area = area;
    carta->pib = pib;
    carta->pontos_turisticos = pontos_turisticos;
    
    carta->densidade_populacional = calcular_densidade(populacao, area);
    carta->pib_per_capita = calcular_pib_per_capita(pib, populacao);
}

void exibir_carta(CartaSuperTrunfo carta) {
    printf("\nDados da carta:\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km2\n", carta.area);
    printf("PIB: %.2f milhões de reais\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", carta.pib_per_capita);
}

void comparar_cartas(CartaSuperTrunfo carta1, CartaSuperTrunfo carta2) {
    char atributo_escolhido[] = "Densidade Populacional";
    float valor1 = carta1.densidade_populacional;
    float valor2 = carta2.densidade_populacional;
    
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %.2f hab/km2\n", carta1.cidade, carta1.estado, valor1);
    printf("Carta 2 - %s (%s): %.2f hab/km2\n", carta2.cidade, carta2.estado, valor2);
    
    if (valor1 < valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (valor2 < valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    CartaSuperTrunfo carta1, carta2;
    cadastrar_carta(&carta1,"SP","SP001","São Paulo", 12300000, 1521.11, 714.5, 450);      
    
    cadastrar_carta(&carta2, "RJ", "RJ001", "Rio de Janeiro", 6748000, 1200.27, 338.8, 300);      
    
    exibir_carta(carta1);
    exibir_carta(carta2);
    comparar_cartas(carta1, carta2);
    
    return 0;
}
