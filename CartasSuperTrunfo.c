#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    char estado1[3];
    char codigo1[4];
    char cidade1[50];

    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    float densidade_populacional1;
    float pib1_per_capita;
    float super_poder1;

    printf("\n--- CARTA 1 ---\n");

    printf("Digite o estado da Carta 1: ");
    scanf("%2s", estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);


    // =========================
    // CALCULOS CARTA 1
    // =========================

    densidade_populacional1 = (float)populacao1 / area1;

    pib1_per_capita = (pib1 * 1000000000.0f) / (float)populacao1;

    super_poder1 = (float)populacao1
                 + area1
                 + pib1
                 + pontos_turisticos1
                 + pib1_per_capita
                 + (1.0f / densidade_populacional1);


    // =========================
    // EXIBINDO CARTA 1
    // =========================

    printf("\nCarta 1:\n\n");

    printf("Estado: %s\n\n", estado1);
    printf("Codigo: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n\n", cidade1);
    printf("Populacao: %lu\n\n", populacao1);
    printf("Area: %.2f km²\n\n", area1);
    printf("PIB: %.2f bilhoes de reais\n\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos1);

    printf("Densidade Populacional: %.2f hab/km²\n\n",
           densidade_populacional1);

    printf("PIB per Capita: %.2f reais\n\n",
           pib1_per_capita);

    printf("Super Poder: %.2f\n\n",
           super_poder1);


    // =========================
    // CARTA 2
    // =========================

    char estado2[3];
    char codigo2[4];
    char cidade2[50];

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    float densidade_populacional2;
    float pib2_per_capita;
    float super_poder2;

    printf("\n--- CARTA 2 ---\n");

    printf("Digite o estado da Carta 2: ");
    scanf("%2s", estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);


    // =========================
    // CALCULOS CARTA 2
    // =========================

    densidade_populacional2 = (float)populacao2 / area2;

    pib2_per_capita = (pib2 * 1000000000.0f) / (float)populacao2;

    super_poder2 = (float)populacao2
                 + area2
                 + pib2
                 + pontos_turisticos2
                 + pib2_per_capita
                 + (1.0f / densidade_populacional2);


    // =========================
    // EXIBINDO CARTA 2
    // =========================

    printf("\nCarta 2:\n\n");

    printf("Estado: %s\n\n", estado2);
    printf("Codigo: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n\n", cidade2);
    printf("Populacao: %lu\n\n", populacao2);
    printf("Area: %.2f km²\n\n", area2);
    printf("PIB: %.2f bilhoes de reais\n\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n\n",
           densidade_populacional2);

    printf("PIB per Capita: %.2f reais\n\n",
           pib2_per_capita);

    printf("Super Poder: %.2f\n\n",
           super_poder2);


    // =========================
    // COMPARAÇÃO DAS CARTAS
    // =========================

    printf("\n==============================\n");
    printf("      COMPARACAO DE CARTAS\n");
    printf("==============================\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n",
           populacao1 > populacao2);

    printf("Area: Carta 1 venceu (%d)\n",
           area1 > area2);

    printf("PIB: Carta 1 venceu (%d)\n",
           pib1 > pib2);

    printf("Pontos Turisticos: Carta 1 venceu (%d)\n",
           pontos_turisticos1 > pontos_turisticos2);

    // Na densidade, MENOR vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           densidade_populacional1 < densidade_populacional2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n",
           pib1_per_capita > pib2_per_capita);

    printf("Super Poder: Carta 1 venceu (%d)\n",
           super_poder1 > super_poder2);


    return 0;
}