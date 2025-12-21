#include <stdio.h>

int main() {
    // Definição das variáveis para a Carta 1
    char estado[3], codigo_de_carta[5], nome_da_cidade[90];
    unsigned long int populacao;
    float area, PIB;
    int pontos_turisticos;
    float densidade_populacional, pib_per_capita; // Alterado para float para maior precisão
float poder ;
    // Definição das variáveis para a Carta 2
    char estado2[3], codigo_de_carta2[5], nome_da_cidade2[90];
    unsigned long int populacao2;
    float area2, PIB2;
    int pontos_turisticos2;
    float densidade_populacional2, pib_per_capita2;
float poder2;

    // Cadastro da Carta 1
    printf("--- Digite os dados da primeira carta ---\n");
    printf("Estado (Ex: SP): ");
    scanf("%s", estado);
    printf("Código da carta (Ex: A01): ");
    scanf("%s", codigo_de_carta);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade); // Lê nomes com espaços (ex: São Paulo)
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    densidade_populacional = (float)populacao / area;
    pib_per_capita = PIB / populacao;
    poder = (float)populacao + (float)PIB + (float)pontos_turisticos + (float)pib_per_capita + (1.0f / densidade_populacional);
    // Cadastro da Carta 2
    printf("\n--- Agora digite os dados da segunda carta ---\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo_de_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
   densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = PIB2 / populacao2;
    poder2 = (float)populacao2 + (float)PIB2 + (float)pontos_turisticos2 + (float)pib_per_capita2 + (1.0f / densidade_populacional2);

    // Exibição dos resultados
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_de_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
printf("Poder: %.2f\n", poder);
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_de_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
printf("Poder: %.2f\n", poder2);
// comparação de tudo

    printf(" POPULAÇÃO : CARTA 1 VENCEU (%d)\n", populacao > populacao2);
 printf(" PIB : CARTA 1 VENCEU (%d)\n", PIB > PIB2);
    printf(" PONTOS TURÍSTICOS : CARTA 1 VENCEU (%d)\n", pontos_turisticos > pontos_turisticos2);
    printf(" DENSIDADE POPULAÇÃO : CARTA 1 VENCEU (%d)\n", densidade_populacional < densidade_populacional2);
    printf(" PIB PER CAPITA : CARTA 1 VENCEU (%d)\n", pib_per_capita > pib_per_capita2);
    printf(" PODER : CARTA 1 VENCEU (%d)\n", poder > poder2);


return 0;
} 