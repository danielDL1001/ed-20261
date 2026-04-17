#include <stdio.h>
#include "selecao.h"

#define TAMANHO 10

int busca_sequencial(int vetor[], int n, int valor) {
    for (int i = 0; i < TAMANHO; i++) { // O(n)
        if (vetor[i] == valor) {
            return i; // Retorna o índice onde o valor foi encontrado
        }
    }
    return -1; // Retorna -1 se o valor não for encontrado
}
