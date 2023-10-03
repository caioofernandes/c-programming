#include <stdio.h> 

int main() {

    // Entrada: float quantidade de bytes e a velocidade de transmissão
    // Saída: int quantos segundo serão necessários para fazer o download

    float qtd_bytes, velocidade;
    int segundos;

    printf("Digite a quantidade de bytes do arquivo: ");
    scanf("%f", &qtd_bytes);
    
    printf("Digite a velocidade de transmissão: ");
    scanf("%f", &velocidade);
    
    segundos = qtd_bytes / velocidade;

    printf("Serão necessários %d segundos.", segundos);

    return 0;
}