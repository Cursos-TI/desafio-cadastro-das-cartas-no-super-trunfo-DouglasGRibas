#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char pais[20], estado[20], cidade[20], codigo[20];
    int populacao, pontosturisticos;
    float area, pib, densidade, PibC;
    printf("\nDigite o nome do pais:");
    scanf("%s", pais);

    printf("\nDigite o nome do estado:");
    scanf("%s", estado);

    printf("\nDigite o nome da cidade:");
    scanf("%s", cidade);

    printf("\nDigite o codigo da cidade:");
    scanf("%s", codigo);

    printf("\nDigite o numero da populacao da cidade de %s:", cidade);
    scanf("%d", &populacao);
    fflush(stdin);

    printf("\nDigite o numero de pontos turistico da cidade de %s:", cidade);
    scanf("%d", &pontosturisticos);
    fflush(stdin);

    printf("\nDigite a area da cidade de %s:", cidade);
    scanf("%f", &area);
    fflush(stdin);

    printf("\nDigite o pib da cidade de %s:", cidade);
    scanf("%f", &pib);

    densidade = populacao / area;
    PibC = pib / populacao;



    printf("\nPais:%s", pais);
    printf("\nEstado:%s", estado);
    printf("\nCidade:%s", cidade);
    printf("\nCodigo:%s", codigo);
    printf("\nPopulacao:%d pessoas", populacao);
    printf("\nPontos Turisticos:%d", pontosturisticos);
    printf("\nArea:%.3fkm", area);
    printf("\nPib:%.3f", pib);
    printf("\nA densidade demografica é:%f", densidade);
    printf("\nA o PIB per capita é:%f ", PibC);







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
