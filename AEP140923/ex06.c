#include <stdio.h>

int main() {
    
    float dinheiro;
    int preco_bombom, qtd_bombons;

    printf("Informe a quantidade de dinheiro que Pedrinho tem: ");
    scanf("%f", &dinheiro);

    printf("Informe o preço do bombom: ");
    scanf("%d", &preco_bombom);

    qtd_bombons = dinheiro / preco_bombom;

    printf("Pedrinho pode comprar %d bombons!\n", qtd_bombons);

    return 0;
}