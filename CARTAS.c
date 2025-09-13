#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações da carta
struct Carta {
    char estado[50];
    int codigo;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para cadastrar uma carta
struct Carta cadastrarCarta() {
    struct Carta c;

    printf("Digite o nome do estado: ");
    getchar(); // Limpa buffer antes do fgets
    fgets(c.estado, 50, stdin);
    c.estado[strcspn(c.estado, "\n")] = 0; // Remove \n

    printf("Digite o código da carta: ");
    scanf("%d", &c.codigo);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(c.cidade, 50, stdin);
    c.cidade[strcspn(c.cidade, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &c.populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &c.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &c.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c.pontosTuristicos);

    return c;
}

// Função para mostrar os dados de uma carta
void mostrarCarta(struct Carta c) {
    printf("\n--- Carta ---\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %d\n", c.codigo);
    printf("Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

// Função para comparar cartas por um atributo
void compararCartas(struct Carta c1, struct Carta c2, int atributo) {
    switch (atributo) {
        case 1: // População (menor vence)
            if (c1.populacao < c2.populacao)
                printf("%s vence (menor população)!\n", c1.cidade);
            else if (c2.populacao < c1.populacao)
                printf("%s vence (menor população)!\n", c2.cidade);
            else
                printf("Empate na população!\n");
            break;
        case 2: // Área (maior vence)
            if (c1.area > c2.area)
                printf("%s vence (maior área)!\n", c1.cidade);
            else if (c2.area > c1.area)
                printf("%s vence (maior área)!\n", c2.cidade);
            else
                printf("Empate na área!\n");
            break;
        case 3: // PIB (maior vence)
            if (c1.pib > c2.pib)
                printf("%s vence (maior PIB)!\n", c1.cidade);
            else if (c2.pib > c1.pib)
                printf("%s vence (maior PIB)!\n", c2.cidade);
            else
                printf("Empate no PIB!\n");
            break;
        case 4: // Pontos turísticos (maior vence)
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("%s vence (mais pontos turísticos)!\n", c1.cidade);
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                printf("%s vence (mais pontos turísticos)!\n", c2.cidade);
            else
                printf("Empate nos pontos turísticos!\n");
            break;
        default:
            printf("Atributo inválido!\n");
    }
}

int main() {
    printf("Cadastro da primeira carta:\n");
    struct Carta carta1 = cadastrarCarta();

    printf("\nCadastro da segunda carta:\n");
    struct Carta carta2 = cadastrarCarta();

    mostrarCarta(carta1);
    mostrarCarta(carta2);

    int opcao;
    do {
        printf("\n--- Menu de Comparação ---\n");
        printf("1 - Comparar População (menor vence)\n");
        printf("2 - Comparar Área (maior vence)\n");
        printf("3 - Comparar PIB (maior vence)\n");
        printf("4 - Comparar Pontos Turísticos (maior vence)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4)
            compararCartas(carta1, carta2, opcao);
        else if(opcao != 0)
            printf("Opção inválida. Tente novamente.\n");

    } while(opcao != 0);

    printf("Programa encerrado. Valeu!\n");
    return 0;
}
