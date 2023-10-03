#include <stdio.h> 

int main() {

    // Entrada: float lado do cubo
    // Saída: float volume do cubo

    float lado, volume;

    printf("Digite o lado do cubo: ");
    scanf("%f", &lado);

    volume = lado * lado * lado;

    printf("Volume do cubo: %.2f!", volume);
    
    return 0;
}