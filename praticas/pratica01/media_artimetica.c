#include <stdio.h>
#define TAMANHO 8

float media_result(int n, float soma)
{
    return soma / n;
}

int main() {
    int vetor [TAMANHO];
    for (int i = 0; i < TAMANHO; i++) 
    {   
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    float soma = 0;
    
    if (TAMANHO <= 0) { // Verificação de entrada válida
        printf("Erro: A quantidade de elementos deve ser maior que zero.\n");
        return 1;
    }   else if (TAMANHO > 100) { // Limite de 100 elementos
        printf("Erro: A quantidade de elementos deve ser menor ou igual a 100.\n");
        return 1;
    }
    
    for (int i = 0; i < TAMANHO; i++) {
        soma += vetor[i];
    }
    printf("A média é: %.2f\n", media_result(TAMANHO, soma));

    return 0;
}
