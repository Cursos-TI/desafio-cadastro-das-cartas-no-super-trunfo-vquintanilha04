#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char cidade[50];
    int ataque;
    int defesa;
} 
Carta;
 
void cadastrar_carta(Carta *carta, char estado[], char codigo[], char cidade[], int ataque, int defesa) {
    strcpy(carta->estado, estado);
    strcpy(carta->codigo, codigo);
    strcpy(carta->cidade, cidade);
    carta->ataque = ataque;
    carta->defesa = defesa;
}

void comparar_cartas(Carta carta1, Carta carta2) {
    printf("\n=== Comparação de Cartas ===\n");
    printf("%s (%s) - Ataque: %d | Defesa: %d\n", carta1.cidade, carta1.estado, carta1.ataque, carta1.defesa);
    printf("%s (%s) - Ataque: %d | Defesa: %d\n", carta2.cidade, carta2.estado, carta2.ataque, carta2.defesa);
    
    printf("\nComparando ataque:\n");
    if(carta1.ataque > carta2.ataque) {
        printf("%s vence em ataque!\n", carta1.cidade);
    } else if(carta2.ataque > carta1.ataque) {
        printf("%s vence em ataque!\n", carta2.cidade);
    } else {
        printf("Ataque empatado!\n");
    }
    
    printf("\nComparando defesa:\n");
    if(carta1.defesa > carta2.defesa) {
        printf("%s vence em defesa!\n", carta1.cidade);
    } else if(carta2.defesa > carta1.defesa) {
        printf("%s vence em defesa!\n", carta2.cidade);
    } else {
        printf("Defesa empatada!\n");
    }
}

int main() {
    Carta carta1, carta2;
    
    cadastrar_carta(&carta1, "SP", "001", "São Paulo", 80, 75);
    cadastrar_carta(&carta2, "RJ", "002", "Rio de Janeiro", 85, 70);
    comparar_cartas(carta1, carta2);
    
    return 0;
}
