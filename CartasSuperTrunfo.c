#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char pais[20],pais2[20], estado[20], estado2[20], cidade[20],cidade2[20], codigo[20], codigo2[20];
    int populacao, pontosturisticos,populacao2, pontosturisticos2;
    float area, pib, densidade, PibC,area2, pib2, densidade2, PibC2;
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



    //Segunda carta
    printf("\nDigite o nome do segundo pais:");
    scanf("%s", pais2);

    printf("\nDigite o nome do estado:");
    scanf("%s", estado2);

    printf("\nDigite o nome da cidade:");
    scanf("%s", cidade2);

    printf("\nDigite o codigo da cidade:");
    scanf("%s", codigo2);

    printf("\nDigite o numero da populacao da cidade de %s:", cidade2);
    scanf("%d", &populacao2);
    fflush(stdin);

    printf("\nDigite o numero de pontos turistico da cidade de %s:", cidade2);
    scanf("%d", &pontosturisticos2);
    fflush(stdin);

    printf("\nDigite a area da cidade de %s:", cidade2);
    scanf("%f", &area2);
    fflush(stdin);

    printf("\nDigite o pib da cidade de %s:", cidade2);
    scanf("%f", &pib2);

    densidade2 = populacao2 / area2;
    PibC2 = pib2 / populacao2;

    printf("\nPais:%s", pais2);
    printf("\nEstado:%s", estado2);
    printf("\nCidade:%s", cidade2);
    printf("\nCodigo:%s", codigo2);
    printf("\nPopulacao:%d pessoas", populacao2);
    printf("\nPontos Turisticos:%d", pontosturisticos2);
    printf("\nArea:%.3fkm", area2);
    printf("\nPib:%.3f", pib2);
    printf("\nA densidade demografica é:%f", densidade2);
    printf("\nA o PIB per capita é:%f ", PibC2);

    printf("///////Comparacao entre Cardas///////");
    if(densidade > densidade2)
    {
        printf("\nA carta da cidade:%s tem maior densidade! ", cidade);
    }
    else
    {
        printf("\nA carta da cidade:%s tem maior densidade! ", cidade2);
    }

     if(PibC > PibC2)
    {
        printf("\nA carta da cidade:%s tem maior Pib per capita! ", cidade);
    }
    else
    {
        printf("\nA carta da cidade:%s tem maior Pib per Capita! ", cidade2);
    }










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
