#include <stdio.h>

float imc(float peso, float altura)
{
    if (peso <= 0 || altura <= 0) {
        printf("Erro: Peso e altura devem ser valores positivos.\n");
        return 1;
    }
    return peso / (altura*altura);
}

void classificar_imc(float imc_result)
{
    printf("IMC: %.2f\n", imc_result);
    if (imc_result < 18.5) {    
        printf("Abaixo do peso.\n");
    } else if (imc_result < 25) {
        printf("Peso normal.\n");
    } else if (imc_result < 30) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }
}

int main() { 
    // Testes de classificação de IMC
    classificar_imc(imc(50, 1.90)); // Abaixo do peso
    classificar_imc(imc(68, 1.75)); // Peso normal
    classificar_imc(imc(75, 1.65)); // Sobrepeso
    classificar_imc(imc(70, 1.50)); // Obesidade

    return 0;
}
