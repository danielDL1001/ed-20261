#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(void) {
    ListaEncadeada *lista = criar_lista();
    adcionar_final(lista, 10);
    adcionar_final(lista, 20);
    adcionar_final(lista, 30);
    adcionar_final(lista, 40);
    adcionar_final(lista, 50);
    adcionar_final(lista, 60);
    adcionar_final(lista, 70);
    adcionar_final(lista, 80);
    adcionar_final(lista, 90);

    printf("Quantidade de elementos na lista: %d\n", lista->quantidade);
    No *no = lista->primeiro;
    while (no != NULL)
    {
        printf("Valor encontrado: %d\n", no->dado);
        no = no->proximo;
    }
    
    return 0;
}
