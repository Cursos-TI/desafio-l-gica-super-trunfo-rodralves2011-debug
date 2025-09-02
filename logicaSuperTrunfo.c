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
