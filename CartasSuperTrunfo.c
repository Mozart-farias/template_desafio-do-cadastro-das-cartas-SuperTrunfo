#include <stdio.h>

int main() {

    // =========================
    // DECLARAÇÃO DAS CARTAS
    // =========================

    // Carta 1
    char estado1[3];
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    float densidade1, pibPerCapita1;

    // Carta 2
    char estado2[3];
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2, pibPerCapita2;

    // =========================
    // LEITURA DOS DADOS
    // =========================

    printf("=== Cadastro Carta 1 ===\n");
    scanf("%s", estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nome1);
    scanf("%d", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    printf("\n=== Cadastro Carta 2 ===\n");
    scanf("%s", estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nome2);
    scanf("%d", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // =========================
    // CÁLCULOS
    // =========================

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // =========================
    // ESCOLHA DO ATRIBUTO
    // =========================
    // Neste exemplo vamos comparar POPULAÇÃO

    printf("\n========================================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", nome2, estado2, populacao2);

    // =========================
    // COMPARAÇÃO USANDO IF
    // =========================

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    }
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
