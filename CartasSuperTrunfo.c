#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Variáveis da carta 1
    char estado_um;
    char cod_carta_um[3];
    char nome_cidade_um[50];
    int populacao_um;
    float area_um;
    float pib_um;
    int num_ptos_turistico_um;

    // Variáveis da carta 2
    char estado_dois;
    char cod_carta_dois[3];
    char nome_cidade_dois[50];
    int populacao_dois;
    float area_dois;
    float pib_dois;
    int num_ptos_turistico_dois;

    // Área para entrada de dados
  
    //Leitura dos dados da carta 1 
    printf("Insira dos dados da CARTA 1: \n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_um);

    printf("Digite o código da carta: ");
    scanf("%s", &cod_carta_um);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade_um);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_um)

    printf("Digite a área (em km²): ");
    scanf("%f", &area_um);

    printf("Digite o PIB: ");
    scanf("%f", &pib_um);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &num_ptos_turistico_um); 


    //Leitura dos dados da carta 2 
    printf("\nInsira dos dados da CARTA 2: \n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_dois);

    printf("Digite o código da carta: ");
    scanf("%s", &cod_carta_dois);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade_dois);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_dois);

    printf("Digite a área (em km²): ");
    scanf("%f", &area_dois);

    printf("Digite o PIB: ");
    scanf("%f", &pib_dois);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &num_ptos_turistico_dois); 

    // Área para exibição dos dados da cidade
    //Impressão dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado_um);
    printf("Código: %s \n", cod_carta_um);
    printf("Nome da Cidade: %s \n", nome_cidade_um);
    printf("População: %d \n", populacao_um);
    printf("Área: %f \n", area_um);
    printf("PIB: %f \n", pib_um);
    printf("Número de Pontos Turísticos: %d \n \n", num_ptos_turistico_um);

    //Impressão dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado_dois);
    printf("Código: %s \n", cod_carta_dois);
    printf("Nome da Cidade: %s \n", nome_cidade_dois);
    printf("População: %d\n", populacao_dois);
    printf("Área: %f\n", area_dois);
    printf("PIB: %f\n", pib_dois);
    printf("Número de Pontos Turísticos: %d\n", num_ptos_turistico_dois);

    return 0;
} 