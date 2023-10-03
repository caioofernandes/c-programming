#include <stdio.h> 

int main() {

    // Entrada: float preço inicial do produto
    // Saída: float preço final do produto após desconto
    
    float preco_inicial, desconto, preco_final;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco_inicial);
    
    printf("Digite o valor percentual do desconto: ");
    scanf("%f", &desconto);
    
    preco_final = preco_inicial - preco_inicial * desconto / 100;

    printf("Preço final do produto com desconto: R$%.2f", preco_final);

    return 0;
}