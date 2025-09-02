#include <stdio.h>
#include <string.h>

// Definição da estrutura para representar uma carta de cidade
typedef struct {
    char estado[50];
    int codigoCarta;
    char nomeCidade[50];
    long long populacao;
    double area;
    long long pib;
    int pontosTuristicos;
} CartaCidade;

// Função para exibir os detalhes de uma carta
void exibirCarta(CartaCidade carta) {
    // Imprime o nome da cidade para identificação
    printf("\n--- Detalhes da Carta: %s ---\n", carta.nomeCidade);
    // Imprime o estado da cidade
    printf("Estado: %s\n", carta.estado);
    // Imprime o código da carta
    printf("Código da Carta: %d\n", carta.codigoCarta);
    // Imprime a população da cidade
    printf("População: %lld\n", carta.populacao);
    // Imprime a área da cidade
    printf("Área: %.2f km²\n", carta.area);
    // Imprime o PIB da cidade
    printf("PIB: %lld bilhões de R$\n", carta.pib);
    // Imprime a quantidade de pontos turísticos
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}
