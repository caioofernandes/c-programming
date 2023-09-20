#include <stdio.h>

int main() {

    float preco_produto, preco_final, desconto;

    printf("Informe o preço do produto: ");
    scanf("%f", &preco_produto);

    printf("Informe o percentual de desconto: ");
    scanf("%f", &desconto);

    preco_final = preco_produto - preco_produto * desconto / 100;

    printf("Preço do produto com desconto: %.2f", preco_final);

    return 0;
}