#include <stdio.h>

int main() {
    
    int preco_por_dia = 90, dias_alugados;
    float preco_por_km = 0.20, km_percorridos, preco_total;

    printf("Quantidade de dias alugados: ");
    scanf("%d", &dias_alugados);

    printf("Quantidade de quilômetros percorridos: ");
    scanf("%f", &km_percorridos);

    preco_total = (dias_alugados * preco_por_dia) + (km_percorridos * preco_por_km);

    printf("Valor total a pagar: R$%.2f\n", preco_total);

    return 0;
}