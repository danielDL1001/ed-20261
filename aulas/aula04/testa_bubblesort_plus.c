#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"


#define TAMANHO 1000000

int main ()
{
    clock_t tempo_inicial, tempo_final;
    double duracao;

    int vetor [TAMANHO];
    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor [i] = rand();
    }
    
    printf("Vetor antes de ordenar\n");
    imprimir_vetor (vetor, TAMANHO);
    
    clock_t tempo_inicial = clock();
    bubble_sort (vetor , TAMANHO);
    clock_t tempo_final = clock();

    printf ("Vetor depois de ordenar em %fs\n", duracao);
    imprimir_vetor (vetor, TAMANHO);

    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Vetor depois de ordenar em %f segundos\n", duracao);
    
    return 0;
}

// Copilar: gcc ordenacao.c testa_bubblesort_plus.c -o testa_bubblesort_plus.out
// Executar: ./testa_bubblesort_plus.out