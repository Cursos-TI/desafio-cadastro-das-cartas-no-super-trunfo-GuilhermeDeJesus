#include <stdio.h>

int main() {
    char estado[2];
    char codigo_carta[10];
    char nome_cidade[20];
    int populacao, pontos_turisticos;
    float area, pib;

    char estado2[2];
    char codigo_carta2[10];
    char nome_cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    /*
        Inserir os dados 1
    */
    printf("Digite a LETRA DO ESTADO 1 do super trunfo: ");
    scanf("%s", estado);
    printf("Digite o CÓDIGO DO ESTADO 1 do super trunfo: ");
    scanf("%s", codigo_carta);
    printf("Digite o NOME DA CIDADE 1 do super trunfo: ");
    scanf("%s", nome_cidade);
    printf("Digite a QUANTIDADE DA POPULAÇÃO 1 do super trunfo: ");
    scanf("%d", &populacao);
    printf("Digite a ÁREA DA CIDADE 1 do super trunfo: ");
    scanf("%f", &area);
    printf("Digite o PIB DA CIDADE 1 do super trunfo: ");
    scanf("%f", &pib);
    printf("Quantos PONTOS TURÍSTICOS TEM NA CIDADE 1 do super trunfo: ");
    scanf("%d", &pontos_turisticos);

    float densidade_populacional = populacao / area;
    float pib_per_capita = pib / populacao;

    printf("\n--- Dados da Primeira Cidade/Estado ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita);

    /*
        Inserir os dados 2
    */
    printf("Digite a LETRA DO ESTADO 2 do super trunfo: ");
    scanf("%s", estado2);
    printf("Digite o CÓDIGO DO ESTADO 2 do super trunfo: ");
    scanf("%s", codigo_carta2);
    printf("Digite o NOME DA CIDADE 2 do super trunfo: ");
    scanf("%s", nome_cidade2);
    printf("Digite a QUANTIDADE DA POPULAÇÃO 2 do super trunfo: ");
    scanf("%d", &populacao2);
    printf("Digite a ÁREA DA CIDADE 2 do super trunfo: ");
    scanf("%f", &area2);
    printf("Digite o PIB DA CIDADE 2 do super trunfo: ");
    scanf("%f", &pib2);
    printf("Quantos PONTOS TURÍSTICOS TEM NA CIDADE 2 do super trunfo: ");
    scanf("%d", &pontos_turisticos2);

    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    printf("\n--- Dados da Segunda Cidade/Estado ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}
