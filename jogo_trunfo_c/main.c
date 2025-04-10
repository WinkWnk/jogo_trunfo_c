#include <stdio.h>
#include <stdlib.h>


float densidade_p(float n_populacao_1, float area_1){
    return n_populacao_1 / area_1;
}

float densidade_p2(float n_populacao_2, float area_2){
    return n_populacao_2 / area_2;
}
float pib_pc(float pib_1, float n_populacao_1){
    return pib_1 / n_populacao_1;
}

float pib_pc2(float pib_2, float n_populacao_2){
    return pib_2 / n_populacao_2;
}

float soma_power1(float n_populacao_1, float area_1, float pib_1, int np_turisticos_1, float result_dp, float result_pib_pc){
    return n_populacao_1 + area_1 + pib_1 + np_turisticos_1 + result_dp + result_pib_pc;
}

float soma_power2(float n_populacao_2, float area_2, float pib_2, int np_turisticos_2, float result_dp2, float result_pib_pc2){
    return n_populacao_2 + area_2 + pib_2 + np_turisticos_2 + result_dp2 + result_pib_pc2;
}

int main (){

// Estado
// Código
// Nome da Cidade
// População
// Área
// PIB
// Número de Pontos Turísticos
    // int comparacao;
    char estado_1, estado_2;
    char id_1[4], id_2[4];
    // char id[32][4];
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
    scanf(" %d", &np_turisticos_1);
// Chamando a Função de Densidade populacional Carta 1
    float result_dp = densidade_p(n_populacao_1, area_1);
    printf("Densidade Populacional: %f hab/km\n", result_dp);
// Chamando a Função de PIB per Capita Carta 1
    float result_pib_pc = pib_pc(pib_1, n_populacao_1);
    printf("PIB per Capita: %f reais\n", result_pib_pc);
// Super Poder Carta 1
    float super_poderC1 = soma_power1(n_populacao_1,area_1,pib_1,np_turisticos_1,result_dp,result_pib_pc);
    printf("Super Poder: %.3f", super_poderC1);

    printf("\n*___________________________________________________*\n");
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
    scanf(" %d", &np_turisticos_2);
// Chamando a Função de Densidade populacional Carta 2
    float result_dp2 = densidade_p(n_populacao_2, area_2);
    printf("Densidade Populacional: %f hab/km\n", result_dp2);
// Chamando a Função de PIB per Capita Carta 2
    float result_pib_pc2 = pib_pc2(pib_2, n_populacao_2);
    printf("PIB per Capita: %f reais\n", result_pib_pc2);
// Super Poder Carta 2
    float super_poderC2 = soma_power2(n_populacao_2,area_2,pib_2,np_turisticos_2,result_dp2,result_pib_pc2);
    printf("Super Poder: %.3f", super_poderC2);


    printf("\n***************************************************************************************\n");
    printf("Que otimas cartas! Agora vou exibi-las respectivamente para voce ver todo seu poder!!!\n");
    printf("***************************************************************************************\n");

    printf("Carta 1 \n");

    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", id_1);
    printf("Nome da Cidade: %s\n", cidade[0]);
    printf("Populacao: %f\n", n_populacao_1);
    printf("Area: %f km\n", area_1);
    printf("PIB: %f bilhoes de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n", np_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km\n", result_dp);
    printf("PIB per Capita: %f reais\n", result_pib_pc);
    printf("Super Poder: %.3f", super_poderC1);

    printf("\nCarta 2 \n");

    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", id_2);
    printf("Nome da Cidade: %s\n", cidade[1]);
    printf("Populacao: %f\n", n_populacao_2);
    printf("Area: %f km\n", area_2);
    printf("PIB: %f bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", np_turisticos_2);
    printf("Densidade Populacional: %f hab/km\n", result_dp2);
    printf("PIB per Capita: %f reais\n", result_pib_pc2);
    printf("Super Poder: %.3f\n", super_poderC2);

    if(n_populacao_1 > n_populacao_2){
        printf("Carta 1 vence com %.2f pontos em populacao", n_populacao_1);
    } else{
        printf("Carta 2 vence com %.2f pontos em populacao", n_populacao_2);
    }

    system("pause");
    return 0;
}

// int - %d (inteiros e decimais inteiros)
// char - %c (caractere)
// float - %f ou %e (notação cient.)
// string - %s (string de caracteres)

// char id[32][4] = {
//     "A01", "A02", "A03", "A04",
//     "B01", "B02", "B03", "B04",
//     "C01", "C02", "C03", "C04",
//     "D01", "D02", "D03", "D04",
//     "E01", "E02", "E03", "E04",
//     "F01", "F02", "F03", "F04",
//     "G01", "G02", "G03", "G04",
//     "H01", "H02", "H03", "H04"
// };