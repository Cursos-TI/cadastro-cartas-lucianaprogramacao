#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    char estado1[3];
    char codigo1[4];
    char cidade1[50];

    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    float densidade_populacional1;
    float pib1_per_capita;

    printf("\n--- CARTA 1 ---\n");

    printf("Digite o estado da Carta 1: ");
    scanf("%2s", estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib1_per_capita = (pib1 * 1000000000.0) / populacao1;

    // Exibindo Carta 1

    printf("\nCarta 1:\n\n");

    printf("Estado: %s\n\n", estado1);
    printf("Codigo: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n\n", cidade1);
    printf("Populacao: %d\n\n", populacao1);
    printf("Area: %.2f km²\n\n", area1);
    printf("PIB: %.2f bilhoes de reais\n\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n\n",
           densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n\n",
           pib1_per_capita);
    // =========================
    // CARTA 2
    // =========================

    printf("\n--- CARTA 2 ---\n");

char estado2[3];
    char codigo2[4];
    char cidade2[50];

    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    float densidade_populacional2;
    float pib2_per_capita;

    printf("\n--- CARTA 2 ---\n");

    printf("Digite o estado da Carta 2: ");
    scanf("%2s", estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib2_per_capita = (pib2 * 1000000000.0) / populacao2;

 printf("Carta 2:\n\n");

    printf("Estado: %s\n\n", estado2);
    printf("Codigo: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n\n", cidade2);
    printf("Populacao: %d\n\n", populacao2);
    printf("Area: %.2f km²\n\n", area2);
    printf("PIB: %.2f bilhoes de reais\n\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n\n",
           densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n\n",
           pib2_per_capita);

    return 0;
}