#include <stdio.h>

int main() {

    int x, y;

    printf("Digite um valor para 'x': ");
    scanf("%d", &x);

    printf("Digite um valor para 'y': ");
    scanf("%d", &y);

    if( x % y == 0)
        printf("'y' é divisor de 'x'\n");
    else
        printf("'y' não é divisor de 'x'\n");

    if( y % x == 0)
        printf("'x' é divisor de 'y'");
    else 
        printf("'x' não é divisor de 'y'");

    return 0;
}