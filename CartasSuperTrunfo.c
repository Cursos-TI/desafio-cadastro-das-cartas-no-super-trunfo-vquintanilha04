#include <stdio.h>

int main() {
    // Carta do jogador
    char nomePlayer[10] = "Godwynn";
    int forcaPlayer = 90;
    int inteligenciaPlayer = 70;
    int agilidadePlayer = 75;

    // Carta do computador
    char nomePC[10] = "Rennala";
    int forcaPC = 50;
    int inteligenciaPC = 90;
    int agilidadePC = 75; 

    int escolha, valorPlayer, valorPC;

    printf("Você é o %s\n", nomePlayer);
    printf("Escolha o atributo para competir: \n");
    printf("1 - Força\n2 - Inteligência\n3 - Agilidade\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        valorPlayer = forcaPlayer;
        valorPC = forcaPC;
        printf("\nForça da Rennala: %d\n", valorPC);
    }
    else if (escolha == 2) {
        valorPlayer = inteligenciaPlayer;
        valorPC = inteligenciaPC;
        printf("\nInteligência da Rennala: %d\n", valorPC);
    }
    else if (escolha == 3) {
        valorPlayer = agilidadePlayer;
        valorPC = agilidadePC;
        printf("\nAgilidade da Rennala: %d\n", valorPC);
    }
    else {
        printf("Opção inválida!\n");
        return 1;
    }

    if (valorPlayer > valorPC) {
        printf("\nVocê venceu!");
    }
    else if (valorPlayer < valorPC) {
        printf("\nVocê Perdeu!");
    }
    else {
        printf("\nEmpate!\n");
    }
    
    return 0;
}
