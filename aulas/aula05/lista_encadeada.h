#ifndef SELECAO_H
#define SELECAO_H

ListaEncadeada *criar_lista();
void destuir(ListaEncadeada *lista);
void adcionar_final(ListaEncadeada *lista, int valor);
int lista_vazia(ListaEncadeada *lista);
No *buscar_no(ListaEncadeada *lista, int valor);
void remover(ListaEncadeada *lista, int valor  );


#endif