#include <stdio.h>

int main(){

    char estado[1] = "";
    char codigo_carta[10] = "";
    char nome_cidade[20] = "";
    int populacao, pontos_turisticos;
    float area, pib;

    printf("Digite a LETRA do estado do super trunfo: ");
    scanf("%s", &estado);
    printf(" \nDigite o CÓDIGO do estado do super trunfo: ");
    scanf("%s", &codigo_carta);
    printf(" \nDigite o NOME DA CIDADE do super trunfo: ");
    scanf("%s", &nome_cidade);
    printf(" \nDigite a QUANTIDADE DA POPULAÇÃO do super trunfo: ");
    scanf("%d", &populacao);
    printf(" \nDigite a ÁREA da cidade do super trunfo: ");
    scanf("%f", &area);
    printf(" \nDigite o PIB da cidade do super trunfo: ");
    scanf("%f", &pib);
    printf(" \nQuantos Pontos Turísticos tem na cidade do super trunfo: ");
    scanf("%d", &pontos_turisticos);

    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", codigo_carta);
    printf("\nNome da Cidade: %s", nome_cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %d km²", area);
    printf("\nPIB: %d", pib);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos);
}