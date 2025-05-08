#include <stdio.h>

int main() {
    // Dados das cartas
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int num_pontos1, num_pontos2;

    float capita1, capita2, densidade1, densidade2;
    float val1_attr1 = 0, val2_attr1 = 0, val1_attr2 = 0, val2_attr2 = 0;
    int attr1, attr2;

    // Entrada da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código (2 letras): "); scanf("%s", codigo1);
    printf("Nome: "); scanf("%s", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (milhões): "); scanf("%f", &PIB1);
    printf("Pontos turísticos: "); scanf("%d", &num_pontos1);

    // Entrada da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código (2 letras): "); scanf("%s", codigo2);
    printf("Nome: "); scanf("%s", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (milhões): "); scanf("%f", &PIB2);
    printf("Pontos turísticos: "); scanf("%d", &num_pontos2);

    // Cálculos derivados
    capita1 = PIB1 / (float)populacao1;
    capita2 = PIB2 / (float)populacao2;
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Escolha do primeiro atributo
    printf("\n===== Escolha do PRIMEIRO atributo =====\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
    printf("Digite: ");
    scanf("%d", &attr1);

    // Escolha do segundo atributo (sem repetir o primeiro)
    printf("\n===== Escolha do SEGUNDO atributo (diferente do primeiro) =====\n");
    if (attr1 != 1) printf("1 - População\n");
    if (attr1 != 2) printf("2 - Área\n");
    if (attr1 != 3) printf("3 - PIB\n");
    if (attr1 != 4) printf("4 - Pontos turísticos\n");
    if (attr1 != 5) printf("5 - Densidade populacional\n");

    printf("Digite: ");
    scanf("%d", &attr2);

    if (attr1 == attr2 || attr1 < 1 || attr1 > 5 || attr2 < 1 || attr2 > 5) {
        printf("\nAtributos inválidos! Eles devem ser diferentes e estar entre 1 e 5.\n");
        return 1; // Finaliza o programa
    }

    // Atribui os valores do primeiro atributo
    switch (attr1) {
        case 1: val1_attr1 = populacao1; val2_attr1 = populacao2; break;
        case 2: val1_attr1 = area1; val2_attr1 = area2; break;
        case 3: val1_attr1 = PIB1; val2_attr1 = PIB2; break;
        case 4: val1_attr1 = num_pontos1; val2_attr1 = num_pontos2; break;
        case 5: val1_attr1 = densidade1; val2_attr1 = densidade2; break;
        default: printf("Erro!\n"); return 1;
    }

    // Atribui os valores do segundo atributo
    switch (attr2) {
        case 1: val1_attr2 = populacao1; val2_attr2 = populacao2; break;
        case 2: val1_attr2 = area1; val2_attr2 = area2; break;
        case 3: val1_attr2 = PIB1; val2_attr2 = PIB2; break;
        case 4: val1_attr2 = num_pontos1; val2_attr2 = num_pontos2; break;
        case 5: val1_attr2 = densidade1; val2_attr2 = densidade2; break;
        default: printf("Erro!\n"); return 1;
    }

    // Mostrar resultados
    printf("\n===== COMPARAÇÃO =====\n");

    // Comparar primeiro atributo
    printf("Atributo 1: ");
    switch (attr1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade populacional (menor vence)\n"); break;
    }
    printf("%.2f x %.2f => %s\n", val1_attr1, val2_attr1,
           (attr1 == 5) ? ((val1_attr1 < val2_attr1) ? nome1 : (val2_attr1 < val1_attr1) ? nome2 : "Empate")
                        : ((val1_attr1 > val2_attr1) ? nome1 : (val2_attr1 > val1_attr1) ? nome2 : "Empate"));

    // Comparar segundo atributo
    printf("\nAtributo 2: ");
    switch (attr2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade populacional (menor vence)\n"); break;
    }
    printf("%.2f x %.2f => %s\n", val1_attr2, val2_attr2,
           (attr2 == 5) ? ((val1_attr2 < val2_attr2) ? nome1 : (val2_attr2 < val1_attr2) ? nome2 : "Empate")
                        : ((val1_attr2 > val2_attr2) ? nome1 : (val2_attr2 > val1_attr2) ? nome2 : "Empate"));

    // Soma dos atributos
    float soma1 = val1_attr1 + val1_attr2;
    float soma2 = val2_attr1 + val2_attr2;

    printf("\n===== SOMA FINAL =====\n");
    printf("%s: %.2f\n%s: %.2f\n", nome1, soma1, nome2, soma2);

    printf("Resultado final: %s\n",
           (soma1 > soma2) ? nome1 : (soma2 > soma1) ? nome2 : "Empate!");

    return 0;
}
