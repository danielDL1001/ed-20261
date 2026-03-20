#include <stdio.h>

int main() { 
    FILE *arquivo = fopen("potencia.txt", "w+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    int potencia = 0;
    float num = 8.0, resultado = 1;
    
    for (int i = 0; i<potencia; i++) {
        resultado *= num;
    }

    // Arquivo de texto para salvar o resultado da potência
    fprintf(arquivo, "O resultado da potência é: %.2f\n", resultado);
    fclose(arquivo);
    
    return 0;
}