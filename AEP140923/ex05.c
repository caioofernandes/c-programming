#include <stdio.h>

int main() {
    
    float preco_pao_de_queijo = 2.50, preco_coxinha = 3.00, preco_refrigerante = 4.00, preco_suco = 3.50, total;
    int qtd_pao_de_queijo, qtd_coxinha, qtd_refrigerante, qtd_suco;


    printf("Informe a quantidade de pães de queijo consumidos: ");
    scanf("%d", &qtd_pao_de_queijo);

    printf("Informe a quantidade de coxinhas consumidas: ");
    scanf("%d", &qtd_coxinha);

    printf("Informe a quantidade de refrigerantes tomados: ");
    scanf("%d", &qtd_refrigerante);

    printf("Informe a quantidade de sucos tomados: ");
    scanf("%d", &qtd_suco);

    total = (qtd_pao_de_queijo * preco_pao_de_queijo) + (qtd_coxinha * preco_coxinha) + (qtd_refrigerante * preco_refrigerante) + (qtd_suco * preco_suco);

    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}