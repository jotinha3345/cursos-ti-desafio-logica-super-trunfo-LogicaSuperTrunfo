#include <stdio.h>

int main() {
    // Dados de entrada
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int num_pontos1, num_pontos2;
    int opcao;

    // Cálculos derivados
    float capita1, capita2;
    float densidade1, densidade2;
    float super_poder1, super_poder2;

    // Leitura da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);

    printf("Código (2 letras): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em milhões): ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: ");
    scanf("%d", &num_pontos1);

    // Cálculos da Carta 1
    capita1 = PIB1 / (float)populacao1;
    densidade1 = (float)populacao1 / area1;
    super_poder1 = (float)populacao1 + area1 + PIB1 + (float)num_pontos1 + capita1 + (1.0f / densidade1);

    // Leitura da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Código (2 letras): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em milhões): ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ");
    scanf("%d", &num_pontos2);

    // Cálculos da Carta 2
    capita2 = PIB2 / (float)populacao2;
    densidade2 = (float)populacao2 / area2;
    super_poder2 = (float)populacao2 + area2 + PIB2 + (float)num_pontos2 + capita2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\n======= CARTA 1 =======\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nome1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f\n", populacao1, area1, PIB1);
    printf("Pontos turísticos: %d\nPIB per Capita: %.3f\n", num_pontos1, capita1);
    printf("Densidade Populacional: %.2f\nSuper Poder: %.3f\n", densidade1, super_poder1);

    printf("\n======= CARTA 2 =======\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigo2, nome2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f\n", populacao2, area2, PIB2);
    printf("Pontos turísticos: %d\nPIB per Capita: %.3f\n", num_pontos2, capita2);
    printf("Densidade Populacional: %.2f\nSuper Poder: %.3f\n", densidade2, super_poder2);

    
     // Menu de comparação
     
     printf("\n===== COMPARAÇÃO ENTRE CARTAS =====\n");
     printf("Escolha o atributo para comparar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Pontos turísticos\n");
     printf("5 - Densidade populacional (menor vence)\n");
     printf("Digite sua opção: ");
     scanf("%d", &opcao);
 
     printf("\nComparando %s e %s\n", nome1, nome2);

    if(populacao1 > populacao2){
       
    printf("População: Carta 1 venceu %d\n", populacao1);
    }
    else{
        printf("População: Carta 2 venceu (%d)\n", populacao2); 
    }

    switch (opcao)
    {
    case 1:
        printf("População: %lu vs %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (populacao2 > populacao2)
        {
            printf("Vencedor: %s\n", nome2);       
         }else{
            printf("Empate\n");
         }
        break;

        case 2:
        printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
        if (area1 > area2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (area2 > area1)
        {
            printf("Vencedor: %s\n", nome2);       
         }else{
            printf("Empate\n");
         }
        break;
    
        case 3:
        printf("PIB: %.2f milhões vs %.2f milhões\n", PIB1, PIB2);
        if (PIB1 > PIB2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (PIB2 > PIB1)
        {
            printf("Vencedor: %s\n", nome2);       
         }else{
            printf("Empate\n");
         }
        break;

        case 4:
        printf("Pontos turísticos: %d vs %d\n", num_pontos1, num_pontos2);
        if (num_pontos1 > num_pontos2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (num_pontos2 > num_pontos2)
        {
            printf("Vencedor: %s\n", nome2);       
         }else{
            printf("Empate\n");
         }
        break;

        case 5:
        printf("Densidade populacional: %.2f vs %.2f\n", densidade1, densidade2);
        if (densidade1 < densidade2)
        {
            printf("Vencedor: %s\n", nome1);
        } else if (densidade2 < densidade2)
        {
            printf("Vencedor: %s\n", nome2);       
         }else{
            printf("Empate\n");
         }
        break;

        default:
        printf("Opção inválida!\n");
        break;
    }
}