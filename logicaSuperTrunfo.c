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

int main() {
    // Declaração de duas variáveis do tipo CartaCidade para armazenar as cartas
    CartaCidade carta1, carta2;

    // --- Cadastro da Carta 1 ---
    // Mensagem de instrução para o usuário
    printf("--- Cadastro da Primeira Carta ---\n");
    // Solicita e lê o estado da cidade
    printf("Digite o estado: ");
    scanf("%s", carta1.estado);
    // Solicita e lê o código da carta
    printf("Digite o código da carta: ");
    scanf("%d", &carta1.codigoCarta);
    // Solicita e lê o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nomeCidade);
    // Solicita e lê a população da cidade
    printf("Digite a população: ");
    scanf("%lld", &carta1.populacao);
    // Solicita e lê a área da cidade
    printf("Digite a área (em km²): ");
    scanf("%lf", &carta1.area);
    // Solicita e lê o PIB da cidade
    printf("Digite o PIB (em bilhões de R$): ");
    scanf("%lld", &carta1.pib);
    // Solicita e lê o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    