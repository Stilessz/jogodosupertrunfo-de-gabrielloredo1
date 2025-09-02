#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main() {
    // Dados do Rio de Janeiro
    int codigoRJ = 1;
    char nomeRJ[] = "Rio de Janeiro";
    int populacaoRJ = 6748000;           
    float areaRJ = 1182.3;               
    float pibRJ = 413.0;                 
    int pontosTuristicosRJ = 12;

    // Dados do Ceará
    int codigoCE = 2;
    char nomeCE[] = "Ceará";
    int populacaoCE = 9241000;           
    float areaCE = 148894.4;             
    float pibCE = 168.3;                 
    int pontosTuristicosCE = 9;

    // Exibição das cartas
    printf("--- Carta 1 ---\n");
    printf("Cidade: %s\n", nomeRJ);
    printf("Código: %d\n", codigoRJ);
    printf("População: %d habitantes\n", populacaoRJ);
    printf("Área: %.2f km²\n", areaRJ);
    printf("PIB: R$ %.2f bilhões\n", pibRJ);
    printf("Pontos Turísticos: %d\n", pontosTuristicosRJ);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", nomeCE);
    printf("Código: %d\n", codigoCE);
    printf("População: %d habitantes\n", populacaoCE);
    printf("Área: %.2f km²\n", areaCE);
    printf("PIB: R$ %.2f bilhões\n", pibCE);
    printf("Pontos Turísticos: %d\n", pontosTuristicosCE);

    return 0;
}