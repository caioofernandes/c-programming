#include <stdio.h> 

int main() {

    // Entrada: float comprimento e a largura do terreno, além do preço do arame farpado
    // Saída: float perímetro a ser coberto e o custo total

    float comprimento, largura, preco, perimetro, custo;

    printf("Digite o o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o valor do metro do arame em reais: ");
    scanf("%f", &preco);

    perimetro = comprimento * 2 + largura * 2;

    custo = preco * perimetro * 4;

    printf("O área a ser coberta de arame será: %.2f!\n", perimetro);

    printf("O custo total será: R$%.2f!", custo);
    
    return 0;
}