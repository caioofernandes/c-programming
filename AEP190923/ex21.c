#include <stdio.h> 

int main() {

    // Entrada: float segundo que o carro demorou pra percorrer 1km
    // Saída: float aceleração do carro em metros por segundo quadrado

    float t, distancia, aceleracao;

    printf("Digite o tempo (em segundos) que o carro levou para percorrer 1 km: ");
    scanf("%f", &t);

    distancia = 1000.0;

    aceleracao = (2 * distancia) / (t * t);

    printf("A aceleração do carro é: %.2f metros/s quadrado", aceleracao);
    
    return 0;
}