#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    printf("\n--- CARTA 1 ---\n");

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);


    // Exibindo Carta 1

    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);


    // =========================
    // CARTA 2
    // =========================

    printf("\n--- CARTA 2 ---\n");

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Digite o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);


    // Exibindo Carta 2

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);


    return 0;
}