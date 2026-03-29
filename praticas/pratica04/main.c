#include <stdio.h>
#include <string.h>
#include "ordenacao.h"

int main() {
    Algoritmo alg1 = criar_algoritmo(1);
    Algoritmo alg2 = criar_algoritmo(2);
    Algoritmo alg3 = criar_algoritmo(3);

    bubble_sort(&alg1);
    selection_sort(&alg2);
    quick_sort(&alg3);

    printf("Algoritmo 1: %.2f\n", calcular_tempo(&alg1));
    printf("Algoritmo 2: %.2f\n", calcular_tempo(&alg2));
    printf("Algoritmo 3: %.2f\n", calcular_tempo(&alg3));

    return 0;
}