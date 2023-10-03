#include <stdio.h> 

int main() {

    // Entrada: float raio da esfera
    // Saída: float volume da esfera

    float raio, volume, pi;
    pi = 3,14;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3) * pi * raio * raio * raio;

    printf("Volume da esfera: %.2f", volume);

    return 0;
}