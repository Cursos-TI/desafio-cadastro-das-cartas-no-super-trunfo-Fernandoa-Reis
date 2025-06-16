#include <stdio.h>

int main() {
//Variaveis Carta1
 char estado1;
 char codigo1[4];
 char cidade1[50];
 int populacao1;
 float area1;
 float pib1;
 int pontos_turisticos1;

//Variaveis Carta2
 char estado2;
 char codigo2[4];
 char cidade2[50];
 int populacao2;
 float area2;
 float pib2;
 int pontos_turisticos2;

  // Leitura dos dados da Carta 1
 printf("Cadastro da Carta 1:\n");
 printf("Estado (A a H): ");
 scanf(" %c", &estado1);
 printf("Código (ex: A01): ");
 scanf("%3s", codigo1);
 printf("Nome da Cidade: ");
 scanf(" %49[^\n]", cidade1);
 printf("População: ");
 scanf("%d", &populacao1);
 printf("Área (em km²): ");
 scanf("%f", &area1);
 printf("PIB: ");
 scanf("%f", &pib1);
 printf("Número de Pontos Turísticos: ");
 scanf("%d", &pontos_turisticos1);

// Leitura dos dados da Carta 2
 printf("\nCadastro da Carta 2:\n");
 printf("Estado (A a H): ");
 scanf(" %c", &estado2);
 printf("Código (ex: B02): ");
 scanf("%3s", codigo2);
 printf("Nome da Cidade: ");
 scanf(" %49[^\n]", cidade2);
 printf("População: ");
 scanf("%d", &populacao2);
 printf("Área (em km²): ");
 scanf("%f", &area2);
 printf("PIB: ");
 scanf("%f", &pib2);
 printf("Número de Pontos Turísticos: ");
 scanf("%d", &pontos_turisticos2);

 // Exibição da Carta 1
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado1);
 printf("Código: %s\n", codigo1);
 printf("Nome da Cidade: %s\n", cidade1);
 printf("População: %d\n", populacao1);
 printf("Área: %.2f km²\n", area1);
 printf("PIB: %.2f bilhões de reais\n", pib1);
 printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

 // Exibição da Carta 2
 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da Cidade: %s\n", cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  // Cálculo da densidade demográfica
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // Exibição resumida das cartas
    printf("\n=== CARTAS CADASTRADAS ===\n");
    printf("Carta 1: %s (%s)\n", cidade1, codigo1);
    printf("Carta 2: %s (%s)\n\n", cidade2, codigo2);
