#ifndef ORDENACAO_H
#define ORDENACAO_H

typedef struct algoritmo_t {
    int num;
    int array_size;
} alg;

alg criar_algoritmo(int num);
void bubble_sort(alg *algoritmo, int *array, int size);
void selection_sort(alg *algoritmo, int *array, int size);
void quick_sort(alg *algoritmo, int *array, int size);

#endif