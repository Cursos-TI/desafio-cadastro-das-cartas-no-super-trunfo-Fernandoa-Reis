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


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
