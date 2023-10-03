#include <stdio.h> 

int main() {

    // Entrada: float raio e altura do cilindro
    // Saída: float volume do cilindro

    float raio, altura, volume, pi = 3.14;

    printf("Digite o  valor do raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite o  valor da altura do cilindro: ");
    scanf("%f", &altura);

    volume = altura * pi * raio * raio;
    
    printf("Volume do cilindro: %.2f", volume);

    return 0;
}