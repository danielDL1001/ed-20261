#include <stdio.h>
#include "arvore_binaria.h"

int main() {
    struct BST *arvore = criarBST();
    inserir(arvore, 10);
    inserir(arvore, 5);
    inserir(arvore, 120);
    inserir(arvore, 1);
    inserir(arvore, 49);
    inserir(arvore, 7);
    remover(arvore, 10);

    return 0;
}