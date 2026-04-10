#include <stdio.h>
#include "ordenacao.h"

void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubblesort(int v[], int n) { //O(n)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[i] > v[j]) {
                troca(&v[i], &v[j]);
            }
        }
    }
}

void imprimir_vetor(int v[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%i, ", v[i]);
    }
    printf("] \n");
}
