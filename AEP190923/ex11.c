#include <stdio.h> 

int main() {

    // Entrada: float comprimento e a largura do terreno, além do preço do metro quadrado da grama
    // Saída: float área a ser coberta e o custo total

    float comprimento, largura, preco_m2, area, custo;

    printf("Digite o o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o valor do metro quadrado da grama: ");
    scanf("%f", &preco_m2);

    area = comprimento * largura;

    custo = preco_m2 * area;

    printf("O área a ser coberta de grama será: %.2f!\n", area);

    printf("O custo total será: %.2f!", custo);
    
    return 0;
}