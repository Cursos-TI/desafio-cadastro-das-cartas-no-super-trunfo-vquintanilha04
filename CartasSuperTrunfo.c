#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    
    // Atributos da Carta 1 (São Paulo)
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;
    
    // Atributos da Carta 2 (Rio de Janeiro)
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    srand(time(0));

    printf("Bem Vindo ao Super Trunfo de Cidades!\n\n");
    
    printf("*** CARTA 1 - SÃO PAULO ***\n");
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/km2\n\n", densidade1);
    
    printf("*** CARTA 2 - RIO DE JANEIRO ***\n");
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/km2\n\n", densidade2);

    printf("Escolha o primeiro atributo\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("T. Pontos Turísticos\n");
    printf("D. Densidade\n");

    printf("Escolha a comparação:\n");
    scanf(" %c", &primeiroatributo);

    switch (primeiroatributo)
    {
        case 'P':
        case 'p':
            printf("Você escolheu a opção População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'A':
        case 'a':
            printf("Você escolheu a opção Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolheu a opção PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 'T':
        case 't':
            printf("Você escolheu a opção Pontos Turísticos!\n");
            resultado1 = pontos1 > pontos2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção Densidade!\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida\n");
            resultado1 = 0;
            break;        
    }

    printf("Escolha o segundo atributo\n");
    printf("Atencao: Você deve escolher um atributo diferente do anterior\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("T. Pontos Turísticos\n");
    printf("D. Densidade\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoatributo);

    if (primeiroatributo == segundoatributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
        resultado2 = 0;
    } else {
        switch (segundoatributo)
        {
            case 'P':
            case 'p':
                printf("Você escolheu a opção População!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 'A':
            case 'a':
                printf("Você escolheu a opção Área!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 'I':
            case 'i':
                printf("Você escolheu a opção PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case 'T':
            case 't':
                printf("Você escolheu a opção Pontos Turísticos!\n");
                resultado2 = pontos1 > pontos2 ? 1 : 0;
                break;
            case 'D':
            case 'd':
                printf("Você escolheu a opção Densidade!\n");
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida\n");
                resultado2 = 0;
                break;
        }
    }

    printf("*** RESULTADO ***\n");
    
    if (resultado1 && resultado2)
    {
        printf("Parabéns, São Paulo Ganhou as duas comparações!\n");
    } else if (resultado1 == 1 && resultado2 == 0) {
        printf("Sao Paulo venceu a primeira comparação!\n");
        printf("Rio de Janeiro venceu a segunda comparação!\n");
        printf("Resultado final: Empate!\n");

    } else if (resultado1 == 0 && resultado2 == 1) {
        printf("Rio de Janeiro venceu a primeira comparacao!\n");
        printf("Sao Paulo venceu a segunda comparacao!\n");
        printf("Resultado final: Empate!\n");

    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Rio de Janeiro Ganhou as duas comparacoes!\n");
    } else {
        printf("Resultado indefinido!\n");
    }

    return 0;
}
