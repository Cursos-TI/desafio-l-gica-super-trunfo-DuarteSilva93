#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
} Carta;

int main() {
    Carta c1 = {"Brasil", 203000000, 8515767.0, 1.84, 50, 23.8};
    Carta c2 = {"Canadá", 38000000, 9984670.0, 2.14, 30, 3.8};

    int opcao;

    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n\n", c1.nome, c2.nome);

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", c1.nome, c1.populacao);
            printf("%s: %d\n", c2.nome, c2.populacao);

            if (c1.populacao > c2.populacao) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.populacao > c1.populacao) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", c1.nome, c1.area);
            printf("%s: %.2f\n", c2.nome, c2.area);

            if (c1.area > c2.area) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.area > c1.area) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", c1.nome, c1.pib);
            printf("%s: %.2f\n", c2.nome, c2.pib);

            if (c1.pib > c2.pib) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.pib > c1.pib) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", c1.nome, c1.pontosTuristicos);
            printf("%s: %d\n", c2.nome, c2.pontosTuristicos);

            if (c1.pontosTuristicos > c2.pontosTuristicos) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.pontosTuristicos > c1.pontosTuristicos) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", c1.nome, c1.densidade);
            printf("%s: %.2f\n", c2.nome, c2.densidade);

            // REGRA INVERTIDA
            if (c1.densidade < c2.densidade) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.densidade < c1.densidade) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}