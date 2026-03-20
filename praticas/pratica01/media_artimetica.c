#include <stdio.h>

float media_result(n, soma)
{
    return soma / n;
}

int main() { 
    int n = 4;
    float array[n], soma = 0.0;
    
    if (n <= 0) {
        printf("Erro: A quantidade de elementos deve ser maior que zero.\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("\nDigite o valor do elemento %d: ", i);
        scanf("%f", &array[i]);
        soma += array[i];
    }
    printf("A média é: %.2f\n", media_result(n, soma));

    return 0;
}
