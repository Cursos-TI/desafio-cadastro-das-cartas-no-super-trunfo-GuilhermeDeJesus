#include <stdio.h>

int main(){

    char estado[1] = "";
    char codigo_carta[10] = "";
    char nome_cidade[20] = "";
    int populacao, pontos_turisticos;
    float area, pib;

    char estado2[1] = "";
    char codigo_carta2[10] = "";
    char nome_cidade2[20] = "";
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    /*
        Inserir os dados 1
    */
    printf("Digite a LETRA DO ESTADO 1 do super trunfo: ");
    scanf("%s", &estado);
    printf(" \nDigite o CÓDIGO DO ESTADO 1 do super trunfo: ");
    scanf("%s", &codigo_carta);
    printf(" \nDigite o NOME DA CIDADE 1 do super trunfo: ");
    scanf("%s", &nome_cidade);
    printf(" \nDigite a QUANTIDADE DA POPULAÇÃO 1 do super trunfo: ");
    scanf("%d", &populacao);
    printf(" \nDigite a ÁREA DA CIDADE 1 do super trunfo: ");
    scanf("%f", &area);
    printf(" \nDigite o PIB DA CIDADE 1 do super trunfo: ");
    scanf("%f", &pib);
    printf(" \nQuantos PONTOS TURÍSTICOS TEM NA CIDADE 1 do super trunfo: ");
    scanf("%d", &pontos_turisticos);

    printf("\nDados da Primeira Cidade/Estado");
    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", codigo_carta);
    printf("\nNome da Cidade: %s", nome_cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %d km²", area);
    printf("\nPIB: %d", pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos);

        /*
        Inserir os dados 2
    */
    printf("Digite a LETRA DO ESTADO 2 do super trunfo: ");
    scanf("%s", &estado2);
    printf(" \nDigite o CÓDIGO DO ESTADO 2 do super trunfo: ");
    scanf("%s", &codigo_carta2);
    printf(" \nDigite o NOME DA CIDADE 2 do super trunfo: ");
    scanf("%s", &nome_cidade2);
    printf(" \nDigite a QUANTIDADE DA POPULAÇÃO 2 do super trunfo: ");
    scanf("%d", &populacao2);
    printf(" \nDigite a ÁREA DA CIDADE 2 do super trunfo: ");
    scanf("%f", &area2);
    printf(" \nDigite o PIB DA CIDADE 2 do super trunfo: ");
    scanf("%f", &pib2);
    printf(" \nQuantos PONTOS TURÍSTICOS TEM NA CIDADE 2 do super trunfo: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nDados da Segunda Cidade/Estado");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo_carta2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %d km²", area2);
    printf("\nPIB: %d", pib2);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos2);
}