#ifndef BST_H
#define BST_H

struct No { // Estrutura para um nó da árvore binária
    int dado;
    struct No *esquerda;
    struct No *direita;
};

struct BST { // Estrutura para a árvore binária
    struct No *raiz;
};

struct BST* criarBST();
struct No* criarNo(int valor);
void inserir(struct BST *arvore, int valor);
void remover(struct BST *arvore, int valor);
void exibirPreOrdem(struct No *no);
void exibirEmOrdem(struct No *no);
void exibirPosOrdem(struct No *no);
int arvore_esta_vazia(struct BST *arvore); 
void destruir_arvore(struct No *no);

#endif