#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1[2];
    char codigocarta1 [50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int ponto1;

    // Primeira carta
    printf("SUPER TRUNFO - JOGO DE CARTAS\n");
    printf("\nPREENCHA OS DADOS DA CARTA 1:\n");
    printf("Digite o nome do estado 1: ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área em KM2 da cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turisticos da Cidade 1: ");
    scanf("%d", &ponto1);

    // Segunda carta
    char estado2[2];
    char codigocarta2 [50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto2;

    printf("\nPREENCHA OS DADOS DA CARTA 2:\n");
    printf("Digite o nome do estado 2: ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área em KM2 da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turisticos da Cidade 2: ");
    scanf("%d", &ponto2);

    // Resultados

    printf("\nDADOS DA CARTA 1:\n");
    printf(" - Carta: %s\n", codigocarta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f KM2 - PIB: %.2f\n", area1, pib1);
    printf("Ponto Turístico: %d\n", ponto1);

    printf("\nDADOS DA CARTA 2:\n");
    printf(" - Carta: %s\n", codigocarta2); 
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM2 - PIB: %.2f\n", area2, pib2);
    printf("Ponto Turístico: %d\n", ponto2);


    return 0;
}
