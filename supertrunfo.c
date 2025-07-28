#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: %s\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turísticos: %s\n", pontosTuristicos1 > pontosTuristicos2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", densidadePopulacional1 < densidadePopulacional2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %s\n", pibPerCapita1 > pibPerCapita2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", superPoder1 > superPoder2 ? "Carta 1 venceu" : "Carta 2 venceu");
}