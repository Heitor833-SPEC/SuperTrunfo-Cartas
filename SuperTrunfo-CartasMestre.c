#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeDaCidade1[20] = "Sao Paulo";
    unsigned long int habitantes1 = 2000000;
    float areaKm2_1 = 1500.50;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 105;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeDaCidade2[20] = "Rio de Janeiro";
    unsigned long int habitantes2 = 1500000;
    float areaKm2_2 = 1200.75;
    float pib2 = 350.75; // em bilhões de reais
    int pontosTuristicos2 = 80;

    // Cálculos para Carta 1
    float densidade1 = habitantes1 / areaKm2_1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / habitantes1;

    // Cálculos para Carta 2
    float densidade2 = habitantes2 / areaKm2_2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / habitantes2;

    // Super Poder: população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    float superPoder1 = (float)habitantes1 + areaKm2_1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = (float)habitantes2 + areaKm2_2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibir Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", habitantes1);
    printf("Área: %.2f km²\n", areaKm2_1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n");

    // Exibir Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", habitantes2);
    printf("Área: %.2f km²\n", areaKm2_2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparação de Cartas:\n");

    // Comparações
    printf("População: Carta 1 venceu (%d)\n", habitantes1 > habitantes2);
    printf("Área: Carta 1 venceu (%d)\n", areaKm2_1 > areaKm2_2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
