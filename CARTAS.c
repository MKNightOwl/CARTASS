#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char codigo1[4], nome1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis da Carta 2
    char codigo2[4], nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // --- Cadastro da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Codigo da cidade: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome1); // Lê string com espaços
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // --- Cadastro da Carta 2 ---
    printf("Cadastro da Carta 2:\n");
    printf("Codigo da cidade: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // --- Exibição da Carta 1 ---
    printf("Dados da Carta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    // --- Exibição da Carta 2 ---
    printf("Dados da Carta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
