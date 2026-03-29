#include <stdio.h>
#include "ordenacao.h"

Algoritmo bubble_sort(int *array_size)
{
    Algoritmo alg;
    alg->num = 1;
    alg->array_size = array_size;
    return alg;
}

Algoritmo selection_sort(int *array_size)
{
    Algoritmo alg;
    alg->num = 2;
    alg->array_size = array_size;
    return alg;
}

Algoritmo quick_sort(int *array_size)
{
    Algoritmo alg;
    alg->num = 3;
    alg->array_size = array_size;
    return alg;
}