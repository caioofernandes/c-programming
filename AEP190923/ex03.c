#include <stdio.h> 

int main() {

    // Entrada: float peso e altura da pessoa
    // Saída: float índice de massa corporal da pessoa

    float peso, altura, imc;

    printf("Digite ao seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura em metros separando com ponto: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);

    printf("Seu IMC: %.2f", imc);
    
    return 0;
}