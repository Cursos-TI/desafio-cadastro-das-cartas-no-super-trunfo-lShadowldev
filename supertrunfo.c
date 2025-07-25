#include <stdio.h>

int main() {
    int carta;
    char estado;
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;

    printf("Digite o número da carta: ");
    scanf("%d", &carta);

    printf("Digite o estado (A, B, C, D): ");
    scanf(" %c", &estado);

    printf("Digite o código (A01, A02): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população: ");
    scanf("%f", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turístucos: ");
    scanf("%d", &pontos);

    densidade = populacao / area;
    

    printf("Dados da carta\n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.3f\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhóes de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Total de pontos: %d\n", pontos);
    printf("Total de pontos da carta: %d\n", pontos);
    printf("A densidade populacional é: %.2f habitantes por km²\n", populacao / area);
}