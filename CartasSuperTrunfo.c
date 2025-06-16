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
 float densidade1;

//Variaveis Carta2
 char estado2;
 char codigo2[4];
 char cidade2[50];
 int populacao2;
 float area2;
 float pib2;
 int pontos_turisticos2;
 float densidade2;

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

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    // Cálculo da densidade demográfica (com proteção contra divisão por zero)
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // Menu interativo
    int opcao;
    do {
        printf("\n==== MENU DE ATRIBUTOS ====\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("0. Sair\n");
        printf("Escolha o atributo para comparação: ");
        
        // Verificação de entrada válida
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida! Digite um número.\n");
            while (getchar() != '\n'); // Limpa buffer de entrada
            continue;
        }

        switch (opcao) {
            case 0:
                printf("Jogo encerrado.\n");
                break;
                
            case 1:
                printf("\n=== Comparação por POPULAÇÃO ===\n");
                printf("%s: %d habitantes\n", cidade1, populacao1);
                printf("%s: %d habitantes\n", cidade2, populacao2);
                
                if (populacao1 > populacao2) {
                    printf("Vencedor: %s!\n", cidade1);
                } else if (populacao2 > populacao1) {
                    printf("Vencedor: %s!\n", cidade2);
                } else {
                    printf("EMPATE!\n");
                }
                break;
                
            case 2:
                printf("\n=== Comparação por ÁREA ===\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);
                
                if (area1 > area2) {
                    printf("Vencedor: %s!\n", cidade1);
                } else if (area2 > area1) {
                    printf("Vencedor: %s!\n", cidade2);
                } else {
                    printf("EMPATE!\n");
                }
                break;
                
            case 3:
                printf("\n=== Comparação por PIB ===\n");
                printf("%s: %.2f bilhões\n", cidade1, pib1);
                printf("%s: %.2f bilhões\n", cidade2, pib2);
                
                if (pib1 > pib2) {
                    printf("Vencedor: %s!\n", cidade1);
                } else if (pib2 > pib1) {
                    printf("Vencedor: %s!\n", cidade2);
                } else {
                    printf("EMPATE!\n");
                }
                break;
                
            case 4:
                printf("\n=== Comparação por PONTOS TURÍSTICOS ===\n");
                printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
                printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
                
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("Vencedor: %s!\n", cidade1);
                } else if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("Vencedor: %s!\n", cidade2);
                } else {
                    printf("EMPATE!\n");
                }
                break;
                
            case 5:
                printf("\n=== Comparação por DENSIDADE DEMOGRÁFICA ===\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                printf("%s: %.2f hab/km²\n", cidade2, densidade2);
                
                // Regra invertida: menor valor vence
                if (densidade1 < densidade2) {
                    printf("Vencedor: %s!\n", cidade1);
                } else if (densidade2 < densidade1) {
                    printf("Vencedor: %s!\n", cidade2);
                } else {
                    printf("EMPATE!\n");
                }
                break;
                
            default:
                printf("\nOpção inválida! Digite um número entre 0 e 5.\n");
        }
    } while (opcao != 0);

    return 0;
}