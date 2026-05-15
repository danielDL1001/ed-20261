#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

ListaEncadeada *criar_lista()
{
    ListaEncadeada *lista = (ListaEncadeada *)malloc(sizeof(ListaEncadeada));

    if (lista != NULL) {
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->quantidade = 0;
    }
    return lista;
}

void destruir(ListaEncadeada *lista)
{
    free(lista);
}

int lista_vazia(ListaEncadeada *lista)
{
    return lista != NULL && lista->primeiro == NULL;
}

void adcionar_final(ListaEncadeada *lista, int valor)
{
    No *no = (No *) malloc(sizeof(No));

    if (no == NULL) {
        return;
    }
    no->dado = valor;
    no->proximo = NULL;

    if(lista_vazia(lista)) {
        lista->primeiro = no;
    } else {
        lista->ultimo->proximo = no;
    }
    lista->ultimo = no;
    lista->quantidade++;

}

int buscar(ListaEncadeada *lista, int valor)
{
    if(lista_vazia(lista)) return NULL;

    No *no = lista->primeiro;
    while (no != NULL)
    {
        if (no->dado == valor) return no;
        no = no->proximo;
    }
    return NULL;
}

void remover(ListaEncadeada *lista, int valor)
{
    // Lista (Modo Easy):

    if (lista_vazia(lista)) return;

    // remover o primeiro nó
    No *no = lista->primeiro;
    if(no->dado == valor){
        lista->primeiro = no->proximo;
        free(no);
        return;
    }

    // remove o do meio
    No *anterior = no;
    while (no->proximo != NULL) {
        no = no->proximo;
        if (no->dado == valor) {
            anterior->proximo = no->proximo;
            free(no);
            return;
        }
    }

    // remove o ultimo
    if (no->proximo == NULL) {
        lista->ultimo = anterior;
    }
    

    /* Lista (Modo Hard):

    // Verificar se o primeiro nó é o que deve ser removido
    if (anterior->dado == valor) {
        lista->primeiro = anterior->proximo;
    } else {
        while (posterior != NULL)
        {
            if (posterior->dado == valor){
                anterior->proximo = posterior->proximo;
                break;
            }
            anterior = posterior;
            posterior = posterior->proximo;
        }
        if(posterior->proximo == NULL){
            
        }
    }

    lista->quantidade--;
    free(no);
    */
}
