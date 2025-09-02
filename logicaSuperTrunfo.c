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

    // --- Cadastro da Carta 2 ---
    // Mensagem de instrução para o usuário
    printf("\n--- Cadastro da Segunda Carta ---\n");
    // Solicita e lê o estado da cidade
    printf("Digite o estado: ");
    scanf("%s", carta2.estado);
    // Solicita e lê o código da carta
    printf("Digite o código da carta: ");
    scanf("%d", &carta2.codigoCarta);
    // Solicita e lê o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.nomeCidade);
    // Solicita e lê a população da cidade
    printf("Digite a população: ");
    scanf("%lld", &carta2.populacao);
    // Solicita e lê a área da cidade
    printf("Digite a área (em km²): ");
    scanf("%lf", &carta2.area);
    // Solicita e lê o PIB da cidade
    printf("Digite o PIB (em bilhões de R$): ");
    scanf("%lld", &carta2.pib);
    // Solicita e lê o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

// --- Exibição das Cartas ---
    // Chama a função para exibir a primeira carta cadastrada
    exibirCarta(carta1);
    // Chama a função para exibir a segunda carta cadastrada
    exibirCarta(carta2);

    // --- Comparação das Cartas ---
    // Mensagem de título para a comparação
    printf("\n--- Comparação de Cartas ---\n");
    // Mensagem indicando o atributo de comparação (PIB, neste caso)
    printf("Atributo de comparação: PIB\n");

    // Lógica para comparar o PIB das duas cartas
    if (carta1.pib > carta2.pib) {
        // Se o PIB da primeira carta for maior, ela é a vencedora
        printf("A carta de %s venceu a rodada com um PIB de %lld.\n", carta1.nomeCidade, carta1.pib);
    } else if (carta2.pib > carta1.pib) {
        // Se o PIB da segunda carta for maior, ela é a vencedora
        printf("A carta de %s venceu a rodada com um PIB de %lld.\n", carta2.nomeCidade, carta2.pib);
    } else {
        // Se os PIBs forem iguais, a rodada termina em empate
        printf("As cartas de %s e %s empataram no atributo PIB.\n", carta1.nomeCidade, carta2.nomeCidade);
    }

    return 0; // Indica que o programa terminou com sucesso
}

























