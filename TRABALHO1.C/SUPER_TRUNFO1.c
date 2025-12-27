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

int opcoes;

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

float v1_carta1, v1_carta2; // Valor do Atributo 1 (Carta 1 e 2)
float v2_carta1, v2_carta2; // Valor do Atributo 2 (Carta 1 e 2)


printf ("Escolha a categoria para comparar:\n") ;
printf ("1 - POPULAÇÃO\n") ;
printf ("2 - PIB\n") ;
printf ("3 - PONTOS TURÍSTICOS\n") ;
printf ("4 - DENSIDADE POPULAÇÃO\n") ;
printf ("5 - PIB PER CAPITA\n") ;
printf ("6 - PODER\n") ;
scanf ("%d", &opcoes) ;

 
switch (opcoes) {
case 1 : v1_carta1 = (float)populacao ;
v1_carta2 = (float)populacao2 ;
break ;
case 2 
: v1_carta1 = PIB ;
v1_carta2 = PIB2 ;
break ;
case 3 : v1_carta1 = (float)pontos_turisticos ;
v1_carta2 = (float)pontos_turisticos2 ;
break ;
case 4 : v1_carta1 = -densidade_populacional ;
v1_carta2 = -densidade_populacional2 ;

break;
case 5 : v1_carta1 = pib_per_capita ;
v1_carta2 = pib_per_capita2 ;

break;
case 6 : 
v1_carta1 = poder ;
v1_carta2 = poder2 ;

break;
default:
printf ("Opção inválida!\n") ;
break;
}
int opcao2;
printf (" Escolha o segundo atributo (sem repetição)\n") ;
if (opcoes != 1) printf ("1 - POPULAÇÃO\n") ;
if (opcoes != 2) printf ("2 - PIB\n") ;
if (opcoes != 3) printf ("3 - PONTOS TURÍSTICOS\n") ;
if (opcoes != 4) printf ("4 - DENSIDADE POPULAÇÃO\n") ;
if (opcoes != 5) printf ("5 - PIB PER CAPITA\n") ;       
if (opcoes != 6) printf ("6 - PODER\n") ;
scanf ("%d", &opcao2) ;

if (opcao2 == opcoes) {
    printf (" Atributo repetido! \n") ;

return 0;}

switch (opcao2) {
case 1 : v2_carta1 = (float)populacao ;
v2_carta2 = (float)populacao2 ;
break ;
case 2 : v2_carta1 = PIB ;
         v2_carta2 = PIB2 ;
break ;
case 3 : v2_carta1 = (float)pontos_turisticos ;
         v2_carta2 = (float)pontos_turisticos2 ;
break ;
case 4 : v2_carta1 = -densidade_populacional ;
         v2_carta2 = -densidade_populacional2 ;
break;
case 5 : v2_carta1 = pib_per_capita ;
         v2_carta2 = pib_per_capita2 ;
break;
case 6 : v2_carta1 = poder ;
         v2_carta2 = poder2 ;
break;
default:
printf ("Opção inválida!\n") ;
break;
}

float soma1, soma2;
soma1 = v1_carta1 + v2_carta1 ;
soma2 = v1_carta2 + v2_carta2 ;

printf ("RESULTADOS DA COMPARAÇÃO:\n") ;
printf (" cidade 1 %s  vs cidade 2 %s\n", nome_da_cidade, nome_da_cidade2) ;
printf (" Soma dos atributos da cidade 1: %.2f\n", soma1) ;
printf (" Soma dos atributos da cidade 2: %.2f\n", soma2) ;

if (soma1 > soma2) {
    printf (" A cidade %s é a vencedora!\n", nome_da_cidade) ;
} else if (soma2 > soma1) {
    printf (" A cidade %s é a vencedora!\n", nome_da_cidade2) ;
} else {
    printf (" Empate entre as cidades!\n") ;
}
return 0;
} 
