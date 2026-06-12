#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* fila_criar() {
    Fila *fila = (Fila *)malloc(sizeof(Fila));
    if (fila != NULL) {
        fila->inicio = NULL;
        fila->fim = NULL;
        fila->quantidade = 0;
    }
    return fila;
}

void fila_enfileirar(Fila *fila, int valor) {
    if (fila != NULL) {
        No *novo_no = (No *)malloc(sizeof(No));
        if (novo_no != NULL) {
            novo_no->dado = valor;
            novo_no->proximo = NULL;

            if (fila->fim == NULL) { // Fila vazia
                fila->inicio = novo_no;
            } else {
                fila->fim->proximo = novo_no; // Aponta o próximo do último nó para o novo nó
            }
            fila->fim = novo_no;  // Adcionar no fim da fila
            fila->quantidade++;
        }
    }
}

void fila_desenfileirar(Fila *fila) {
    if (fila != NULL && fila->inicio != NULL) {
        No *temp = fila->inicio;
        fila->inicio = fila->inicio->proximo; // Move o início para o próximo nó
        free(temp); // Libera a memória do nó removido
        fila->quantidade--;

        if (fila->inicio == NULL) { // Se a fila ficou vazia, atualiza o fim para NULL
            fila->fim = NULL;
        }
    } else {
        printf("Fila vazia. Não é possível desenfileirar.\n");
    }
}