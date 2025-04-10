#include <stdio.h>
#include <stdlib.h>

int main (){

// Estado
// Código
// Nome da Cidade
// População
// Área
// PIB
// Número de Pontos Turísticos

    char estado_1, estado_2;
    char id_1[4], id_2[4];
    char id[32][4] = {
        "A01", "A02", "A03", "A04",
        "B01", "B02", "B03", "B04",
        "C01", "C02", "C03", "C04",
        "D01", "D02", "D03", "D04",
        "E01", "E02", "E03", "E04",
        "F01", "F02", "F03", "F04",
        "G01", "G02", "G03", "G04",
        "H01", "H02", "H03", "H04"
    };
    char cidade[2][50];
    float n_populacao_1, n_populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int np_turisticos_1, np_turisticos_2;

    printf("***************************\n");
    printf("Bem Vindo ao Super Trunfo!!!\n");
    printf("***************************\n");

    printf("*_____________________________________________*\n");
    printf("\nDigite os valores de sua primeira carta!!\n");
    printf("*_____________________________________________*\n");
// Estado
    printf("Estado: ");
    scanf(" %c", &estado_1);

// Código
    printf("ID: ");
    scanf(" %3s", id_1);
// Cidade
    printf("Nome da cidade: ");
    scanf(" %s", cidade[0]);
// N° de População
    printf("Populacao: ");
    scanf(" %f", &n_populacao_1);
// Área
    printf("Area: ");
    scanf(" %f", &area_1);
// PIB
    printf("PIB: ");
    scanf(" %f", &pib_1);
// Pontos Turísticos
    printf("Numero de pontos turisticos: ");
    scanf("%d", &np_turisticos_1);

    printf("*___________________________________________________*\n");
    printf("\nAgora digite os valores de sua segunda carta!!\n");
    printf("*___________________________________________________*\n");

    printf("Estado: ");
    scanf(" %c", &estado_2);

// Código
    printf("ID: ");
    scanf(" %3s", id_2);
// Cidade
    printf("Nome da cidade: ");
    scanf(" %s", cidade[1]);
// N° de População
    printf("Populacao: ");
    scanf(" %f", &n_populacao_2);
// Área
    printf("Area: ");
    scanf(" %f", &area_2);
// PIB
    printf("PIB: ");
    scanf(" %f", &pib_2);
// Pontos Turísticos
    printf("Numero de pontos turisticos: ");
    scanf("%d", &np_turisticos_2);

    printf("\n***************************************************************************************\n");
    printf("Que otimas cartas! Agora vou exibi-las respectivamente para voce ver todo seu poder!!!\n");
    printf("***************************************************************************************\n");

    printf("Carta 1 \n");

    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", id[10]);
    printf("Nome da Cidade: %s\n", cidade[0]);
    printf("Populacao: %f\n", n_populacao_1);
    printf("Area: %f km\n", area_1);
    printf("PIB: %f bilhoes de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n", np_turisticos_1);

    printf("\nCarta 2 \n");

    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", id[20]);
    printf("Nome da Cidade: %s\n", cidade[1]);
    printf("Populacao: %f\n", n_populacao_2);
    printf("Area: %f km\n", area_2);
    printf("PIB: %f bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", np_turisticos_2);

    system("pause");
    return 0;
}

// int - %d (inteiros e decimais inteiros)
// char - %c (caractere)
// float - %f ou %e (notação cient.)
// string - %s (string de caracteres)