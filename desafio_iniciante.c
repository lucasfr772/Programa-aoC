#include <stdio.h>
#include <string.h>

struct Carta {
    char estado;
    char codigo[8];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};

int main () {
    struct Carta carta1, carta2;

    printf("Cadastro da carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da carta (EX: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a area: ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontosturisticos);

    // CARTA 2
    printf("\nCadastro da carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (EX: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a area: ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontosturisticos);

    // EXIBIÇÃO
    printf("\nCartas cadastradas\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosturisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontosturisticos);

    return 0;
}










