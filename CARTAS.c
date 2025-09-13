#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro: Menu Interativo com Switch

int main() {
    // Declaração de variáveis para as duas cartas e para a escolha do usuario
    int card1_populacao;
    float card1_area, card1_pib;
    int card1_pontos_turisticos;
    float card1_densidade;

    int card2_populacao;
    float card2_area, card2_pib;
    int card2_pontos_turisticos;
    float card2_densidade;

    int escolha_atributo;

    // --- CADASTRO DAS CARTAS ---
    printf("Cadastro da Carta 1:\n");
    printf("Digite a populacao (int): ");
    scanf("%d", &card1_populacao);
    printf("Digite a area (float): ");
    scanf("%f", &card1_area);
    printf("Digite o PIB (float): ");
    scanf("%f", &card1_pib);
    printf("Digite os pontos turisticos (int): ");
    scanf("%d", &card1_pontos_turisticos);
    printf("\n");

    printf("Cadastro da Carta 2:\n");
    printf("Digite a populacao (int): ");
    scanf("%d", &card2_populacao);
    printf("Digite a area (float): ");
    scanf("%f", &card2_area);
    printf("Digite o PIB (float): ");
    scanf("%f", &card2_pib);
    printf("Digite os pontos turisticos (int): ");
    scanf("%d", &card2_pontos_turisticos);
    printf("\n");

    // --- CÁLCULO DA DENSIDADE POPULACIONAL ---
    card1_densidade = card1_populacao / card1_area;
    card2_densidade = card2_populacao / card2_area;

    // --- MENU INTERATIVO ---
    printf("Escolha o atributo para a comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha_atributo);
    printf("\n");

    // --- COMPARAÇÃO COM SWITCH ---
    printf("=== Resultado da Comparacao ===\n");
    switch (escolha_atributo) {
        case 1: // Populacao (maior vence)
            if (card1_populacao > card2_populacao) {
                printf("A Carta 1 venceu (Populacao)!\n");
            } else if (card2_populacao > card1_populacao) {
                printf("A Carta 2 venceu (Populacao)!\n");
            } else {
                printf("Empate na Populacao.\n");
            }
            break;
        case 2: // Area (maior vence)
            if (card1_area > card2_area) {
                printf("A Carta 1 venceu (Area)!\n");
            } else if (card2_area > card1_area) {
                printf("A Carta 2 venceu (Area)!\n");
            } else {
                printf("Empate na Area.\n");
            }
            break;
        case 3: // PIB (maior vence)
            if (card1_pib > card2_pib) {
                printf("A Carta 1 venceu (PIB)!\n");
            } else if (card2_pib > card1_pib) {
                printf("A Carta 2 venceu (PIB)!\n");
            } else {
                printf("Empate no PIB.\n");
            }
            break;
        case 4: // Pontos Turisticos (maior vence)

