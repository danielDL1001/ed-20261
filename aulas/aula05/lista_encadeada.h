#ifndef SELECAO_H
#define SELECAO_H

typedef struct No {
    int dado;
    struct No *proximo; // Ponteiro para o próximo nó
} No;

typedef struct {
    No *primeiro; 
    No *ultimo;
    int quantidade;
} ListaEncadeada;

ListaEncadeada*criar_lista();
void destruir(ListaEncadeada *lista);
void adcionar_final(ListaEncadeada *lista, int valor);
int lista_vazia(ListaEncadeada *lista);
No *buscar(ListaEncadeada *lista, int valor);
void remover(ListaEncadeada *lista, int valor);
void imprimir(ListaEncadeada *lista);

#endif