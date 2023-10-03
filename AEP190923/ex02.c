#include <stdio.h> 

int main() {

    // Entrada: float base e altura do triângulo
    // Saída: float área do triângulo

    float base, altura, area;

    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);
    
    area = base * altura / 2;

    printf("Area do triângulo: %.2f", area);

    return 0;
}