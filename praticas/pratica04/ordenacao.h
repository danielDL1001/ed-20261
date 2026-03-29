#ifdef ORDENACAO_H
#define ORDENACAO_H

typedef struct algoritmo_t {
    int num;
    int array_size;
} Algoritmo;

Algoritmo criar_algoritmo(int num);
void bubble_sort(Algoritmo *algoritmo);
void selection_sort(Algoritmo *algoritmo);
void quick_sort(Algoritmo *algoritmo);
double calcular_tempo(Algoritmo *algoritmo);

#endif