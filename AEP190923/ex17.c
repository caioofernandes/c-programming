#include <stdio.h> 

int main() {

    // Entrada: int x e y
    // Saída: maior múltiplo de x que seja menor ou igual a y

    int x, y, multiplo;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    multiplo = (y / x) * x;

    printf("O múltiplo de x mais próximo e menor ou igual a y é: %d", multiplo);

    return 0;
}