#include <stdio.h>

typedef struct {
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
} Carta;

int main() {
    // 1. Cadastro das Cartas (Exemplos pré-definidos para teste)
    Carta c1 = {"Brasil", 214300000, 8515767.0, 1609000.0, 50, 25.16};
    Carta c2 = {"Japão", 125700000, 377975.0, 4937000.0, 80, 332.55};

    int opcao1, opcao2;
    float val1_c1, val1_c2, val2_c1, val2_c2;
    char *label1, *label2;

    printf("--- SUPER TRUNFO: DESAFIO FINAL ---\n");

    // 2. Menu do Primeiro Atributo
    printf("\nEscolha o 1º Atributo:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // 3. Menu do Segundo Atributo (Lógica para evitar repetição)
    printf("\nEscolha o 2º Atributo (Diferente do primeiro):\n");
    for(int i = 1; i <= 5; i++) {
        if(i == opcao1) continue; // Pula o atributo já escolhido
        switch(i) {
            case 1: printf("1. População\n"); break;
            case 2: printf("2. Área\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. Pontos Turísticos\n"); break;
            case 5: printf("5. Densidade Demográfica\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // 4. Atribuição de Valores via Switch e Operador Ternário
    // Atributo 1
    switch(opcao1) {
        case 1: label1 = "População"; val1_c1 = c1.populacao; val1_c2 = c2.populacao; break;
        case 2: label1 = "Área"; val1_c1 = c1.area; val1_c2 = c2.area; break;
        case 3: label1 = "PIB"; val1_c1 = c1.pib; val1_c2 = c2.pib; break;
        case 4: label1 = "Pontos Turísticos"; val1_c1 = c1.pontos_turisticos; val1_c2 = c2.pontos_turisticos; break;
        case 5: label1 = "Densidade"; val1_c1 = c1.densidade; val1_c2 = c2.densidade; break;
    }

    // Atributo 2
    switch(opcao2) {
        case 1: label2 = "População"; val2_c1 = c1.populacao; val2_c2 = c2.populacao; break;
        case 2: label2 = "Área"; val2_c1 = c1.area; val2_c2 = c2.area; break;
        case 3: label2 = "PIB"; val2_c1 = c1.pib; val2_c2 = c2.pib; break;
        case 4: label2 = "Pontos Turísticos"; val2_c1 = c1.pontos_turisticos; val2_c2 = c2.pontos_turisticos; break;
        case 5: label2 = "Densidade"; val2_c1 = c1.densidade; val2_c2 = c2.densidade; break;
    }

    // 5. Lógica de Comparação (Inversão para Densidade)
    // Se for densidade (opção 5), multiplicamos por -1 para que o menor valor "vença" na soma comparativa
    float peso1_c1 = (opcao1 == 5) ? -val1_c1 : val1_c1;
    float peso1_c2 = (opcao1 == 5) ? -val1_c2 : val1_c2;
    float peso2_c1 = (opcao2 == 5) ? -val2_c1 : val2_c1;
    float peso2_c2 = (opcao2 == 5) ? -val2_c2 : val2_c2;

    float soma_c1 = peso1_c1 + peso2_c1;
    float soma_c2 = peso1_c2 + peso2_c2;

    // 6. Exibição dos Resultados
    printf("\n================ RESULTADO ================\n");
    printf("Cartas: %s vs %s\n", c1.nome, c2.nome);
    printf("Atributo 1 [%s]: %.2f vs %.2f\n", label1, val1_c1, val1_c2);
    printf("Atributo 2 [%s]: %.2f vs %.2f\n", label2, val2_c1, val2_c2);
    printf("-------------------------------------------\n");
    printf("Soma Total (ponderada): %.2f vs %.2f\n", soma_c1, soma_c2);

    if (soma_c1 > soma_c2) {
        printf("VENCEDOR: %s!\n", c1.nome);
    } else if (soma_c2 > soma_c1) {
        printf("VENCEDOR: %s!\n", c2.nome);
    } else {
        printf("RESULTADO: Empate!\n");
    }
    printf("===========================================\n");

    return 0;
}