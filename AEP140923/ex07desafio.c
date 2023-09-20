#include <stdio.h>

int main() {

    int cigarros_dia, anos, dias_perdidos;

    printf("Quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarros_dia);

    printf("Quantos anos você já fumou: ");
    scanf("%d", &anos);

    dias_perdidos = (cigarros_dia * 10) * (anos * 365) / 1440;

    printf("Você perderá aproximadamente %d dias de vida.\n", dias_perdidos);

    return 0;
}