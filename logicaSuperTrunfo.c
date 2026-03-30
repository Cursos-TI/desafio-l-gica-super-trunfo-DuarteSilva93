#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Carta 1
    char codigo1[10], nome1[50];
    int populacao1;
    float area1, pib1;

    // Variáveis da Carta 2
    char codigo2[10], nome2[50];
    int populacao2;
    float area2, pib2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    // Comparação de População
    printf("\n=== Comparação por População ===\n");
    if (populacao1 > populacao2) {
        printf("Vencedora: %s\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Vencedora: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Área
    printf("\n=== Comparação por Área ===\n");
    if (area1 > area2) {
        printf("Vencedora: %s\n", nome1);
    } else if (area2 > area1) {
        printf("Vencedora: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB
    printf("\n=== Comparação por PIB ===\n");
    if (pib1 > pib2) {
        printf("Vencedora: %s\n", nome1);
    } else if (pib2 > pib1) {
        printf("Vencedora: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}