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
    imprimir(lista);
    printf("\n");

    No *no = buscar(lista, 60);
    printf("O valor 60 esta No %p\n", no);
    No *no2 = buscar(lista, 65);
    printf("O valor 65 esta No %p\n", no2);

    remover(lista, 10);
    remover(lista, 50);

    

    
    return 0;
}

// Copilar: gcc lista_encadeada.c main.c -lm -o le.out
// Executar: ./le.out
