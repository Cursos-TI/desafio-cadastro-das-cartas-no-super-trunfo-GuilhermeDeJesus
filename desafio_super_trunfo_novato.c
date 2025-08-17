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

    /*
        Super Poder
    */
    float super_poder1 = populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    /*
        Comparação Atributo a Atributo
    */
    printf("\n--- Comparação das Cartas ---\n");

    printf("População: %d\n", (populacao > populacao2) ? 1 : 0);
    printf("Área: %d\n", (area > area2) ? 1 : 0);
    printf("PIB: %d\n", (pib > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (pontos_turisticos > pontos_turisticos2) ? 1 : 0);
    printf("PIB per Capita: %d\n", (pib_per_capita > pib_per_capita2) ? 1 : 0);

    // Densidade populacional (menor vence)
    printf("Densidade Populacional: %d\n", (densidade_populacional < densidade_populacional2) ? 1 : 0);

    // Super Poder
    printf("Super Poder: %d\n", (super_poder1 > super_poder2) ? 1 : 0);

    /*
        Exibição dos Super Poderes
    */
    printf("\nSuper Poder Carta 1: %.2f\n", super_poder1);
    printf("Super Poder Carta 2: %.2f\n", super_poder2);

    return 0;
}
