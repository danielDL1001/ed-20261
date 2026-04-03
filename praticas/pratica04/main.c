#include <stdio.h>
#include <string.h>
#include <time.h>
#include "ordenacao.h"

int main() {
    clock_t tempo_inicial, tempo_final;
    double duracao;
    

    alg alg1 = criar_algoritmo(1);
    alg alg2 = criar_algoritmo(2);
    alg alg3 = criar_algoritmo(3);

    int array[20] = {42, 7, 19, 88, 3, 56, 24, 91, 15, 60, 1, 73, 34, 27, 99, 12, 48, 65, 5, 81};

    // Bubble Sort
    tempo_inicial = clock();
    bubble_sort(&alg1, array);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Algoritmo 1: %.2f\n", duracao);

    // Selection Sort
    tempo_inicial = clock();
    selection_sort(&alg2, array);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Algoritmo 2: %.2f\n", duracao);

    // Quick Sort
    tempo_inicial = clock();
    quick_sort(&alg3, array);
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("Algoritmo 3: %.2f\n", duracao);

    return 0;
}