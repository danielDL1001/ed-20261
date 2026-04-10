#include <stdio.h>
#include "ordenacao.h"

alg bubble_sort(int *array, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

alg selection_sort(int *array_size)
{
}

alg quick_sort(int *array_size)
{
}