#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 10

int main ()
{
    clock_t tempo_inicial, tempo_final;
    double duracao;

    int vetor [TAMANHO];
    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor [i] = rand();
    }

    printf("Vetor antes de ordenar:\n");
    imprimir_vetor(vetor, TAMANHO);

    tempo_inicial = clock();
    selection_sort(vetor, 0, TAMANHO-1);
    tempo_final = clock();

    printf("Vetor depois de ordenar:\n");
    imprimir_vetor(vetor, TAMANHO);

    duracao = ((double)(tempo_final - tempo_inicial)) / CLOCKS_PER_SEC;
    printf("Vetor depois de ordenar em %f segundos\n", duracao);

    return 0;
}

// Copilar TUDO: gcc *.c -lm -o a.out
// Executar: ./a.out

// Copilar: gcc ordenacao.c testa_selectionsort_plus.c -o testa_selectionsort_plus.out
// Executar: ./testa_selectionsort_plus.out