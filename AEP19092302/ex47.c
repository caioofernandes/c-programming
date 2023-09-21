#include <stdio.h>

int main() {

    int n, x, y;

    printf("Informe um valor inteiro para n: ");
    scanf("%d", &n);

    printf("Informe um valor qualquer inteiro para x: ");
    scanf("%d", &x);

    printf("Informe um valor inteiro para y que seja maior que y: ");
    scanf("%d", &y);

    if(n >= x && n <= y)
        printf("'n' está dentro do intervalo");

    if(n > y)
        printf("'n' está após o intervalo");

    if(n < x)
        printf("'n' está antes do intervalo");
    return 0;
}