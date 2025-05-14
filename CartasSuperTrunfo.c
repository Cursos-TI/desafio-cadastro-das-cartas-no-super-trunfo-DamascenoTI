#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Vinícius    

int main() {
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2;
    char estado1[5], estado2[5], codigo1[5], codigo2[5], cidade1[20], cidade2[20];

    printf("Dados para Carta 1: \n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);
    
    printf("Digite o código da sua Cidade: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da sua Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da sua Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da sua Cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos turísticos na sua cidade: ");
    scanf("%d", &pontos_turisticos1);


    printf("Dados para Carta 2: \n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);
    
    printf("Digite o código da sua Cidade: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da sua Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da sua Cidade: ");
    scanf("%d",   &populacao2);

    printf("Digite a área da sua Cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos turísticos na sua cidade: ");
    scanf("%d", &pontos_turisticos2);
    
    
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área km²: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("N° Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área km²: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("N° Pontos Turísticos: %d\n", pontos_turisticos2);

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
