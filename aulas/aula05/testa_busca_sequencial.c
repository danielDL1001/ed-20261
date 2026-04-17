#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    for(int i =0; i< TAMANHO; i++){
        vetor[i] = rand() % TAMANHO; // Preenche o vetor com números aleatórios
    }

    int valor;
    printf("Entre com um numero para buscar: ");
    scanf("%i", &valor);

    int achou = busca_sequencial(vetor, TAMANHO, valor);

    if(achou != -1){
        printf("Valor encontrado na posicao: %i\n", achou);
    }else{
        printf("Valor nao encontrado\n");
    }

    return 0;
}